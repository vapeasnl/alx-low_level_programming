#include <stdio.h>
/**
* main - fibonacci
*
* Purpose - no hard
*
* Return:  (Success)
*/
int main(void)
{
unsigned long int i;
unsigned long int avnt = 1;
unsigned long int aprs = 2;
unsigned long int l = 1000000000;
unsigned long int bef1;
unsigned long int bef2;
unsigned long int aft1;
unsigned long int aft2;
printf("%lu", avnt);
for (i = 1; i < 91; i++)
{
printf(", %lu", aft);
aprs += avnt;
avnt = aprs - avnt;
}
bef1 = (avnt / l);
bef2 = (avnt % l);
aft1 = (aprs / l);
aft2 = (aprs % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
aft1 = aft1 + bef1;
bef1 = aft1 - bef1;
aft2 = aft2 + bef2;
bef2 = aft2 - bef2;
}
printf("\n");
return (0);
}
