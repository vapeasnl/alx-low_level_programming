#include <stdio.h>
/**
* main - fibonacci program
*
* Purpose - no hardcode
*
* Return:  (Success)
*/
int main(void)
{
unsigned long int n;
unsigned long int avnt = 1;
unsigned long int aprs = 2;
unsigned long int l = 10000000000;
unsigned long int avnt1;
unsigned long int avnt2;
unsigned long int aprs1;
unsigned long int aprs2;
printf("%lu", avnt);
for (n = 1; n < 91; n++)
{
printf(", %lu", aprs);
aprs += avnt;
avnt = aprs - avnt;
}
avnt1 = (avnt / l);
avnt1 = (avnt % l);
aprs1 = (aprs / l);
aprs2 = (aprs % l);
for (n = 92; n < 99; ++n)
{
printf(", %lu", aprs1 + (aprs2 / l));
printf("%lu", aft2 % l);
aprs1 = aprs1 + avnt1;
avnt1 = aprs1 - avnt1;
aprs2 = aprs2 + avnt2;
avnt2 = aprs2 - avnt2;
}
printf("\n");
return (0);
}
