#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void elf_check(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void class(unsigned char *e_ident);
void data(unsigned char *e_ident);
void version(unsigned char *e_ident);
void abi(unsigned char *e_ident);
void osabi(unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void entry(unsigned long int e_entry, unsigned char *e_ident);
void elf_close(int elf);
/**
* elf_check - Checks if a file is an ELF file.
* @e_ident: A pointer to an array
*/
void elf_check(unsigned char *e_ident)
{
int index;
for (index = 0; index < 4; index++)
{
if (e_ident[index] != 127 && e_ident[index] != 'E' && e_ident[index] != 'L' && e_ident[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
* magic - Prints the magic numbers
* @e_ident: A pointer to an array
*/
void magic(unsigned char *e_ident)
{
int index;
printf("  Magic:   ");
for (index = 0; index < EI_NIDENT; index++)
{
printf("%02x", e_ident[index]);
if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
* class - Prints the class
* @e_ident: A pointer to an array containing the ELF class.
*/
void class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
* data - Prints the data
* @e_ident: A pointer to an array containing the ELF class.
*/
void data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
/**
* version - Prints the version
* @e_ident: A pointer to an array containing the ELF version.
*/
void version(unsigned char *e_ident)
{
printf("  Version:                           %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
/**
* osabi - Prints the OS/ABI
* @e_ident: A pointer to an array containing the ELF version.
*/
void osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
* abi - Prints the ABI version
* @e_ident: A pointer to an array containing the ELF ABI version.
*/
void abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
/**
* type - Prints the type
* @e_type: The ELF type.
* @e_ident: A pointer to an array containing the ELF class.
*/
void type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");
switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}
/**
* entry - Prints the entry point
* @e_entry: The address of the ELF entry point.
* @e_ident: A pointer to an array containing the ELF class.
*/
void entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}
/**
* elf_close - Closes an ELF file.
* @elf: The file descriptor
*/
void elf_close(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", elf);
exit(98);
}
}
/**
* main - Displays the information contained in the ELF header
* at the start of an ELF file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: 0 on success.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *index;
int a, b;
a = open(argv[1], O_RDONLY);
if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
index = malloc(sizeof(Elf64_Ehdr));
if (index == NULL)
{
elf_close(a);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
b = read(a, index, sizeof(Elf64_Ehdr));
if (b == -1)
{
free(index);
elf_close(a);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
elf_check(index->e_ident);
printf("ELF Header:\n");
magic(index->e_ident);
class(index->e_ident);
data(index->e_ident);
version(index->e_ident);
osabi(index->e_ident);
abi(index->e_ident);
type(index->e_type, index->e_ident);
entry(index->e_entry, index->e_ident);
free(index);
elf_close(a);
return (0);
}

