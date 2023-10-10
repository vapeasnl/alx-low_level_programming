#include <stdio.h>
/**
* main - fibonacci <3
*
* Purpose - no hardcode
*
* Return:  (Success)
*/
int main(void)
{
unsigned long int avnt = 1;
unsigned long int aprs = 2;
unsigned long int l = 10000000000;
unsigned long int avnt1 = 0;
unsigned long int avnt2 = 0;
unsigned long int aprs1 = 0;
unsigned long int aprs2 = 0;
printf("%lu", avnt);
for (int n1 = 1; n1 < 91; n1++)
{
printf(", %lu", aprs);
unsigned long int temp = aprs;
aprs += avnt;
avnt = temp;
}

for (int n2 = 92; n2 < 99; ++n2)
{
printf(", %lu", aprs1 + (aprs2 / l));
printf("%010lu", aprs2 % l);
unsigned long int temp1 = aprs1;
aprs1 += avnt1;
avnt1 = temp1;
unsigned long int temp2 = aprs2;
aprs2 += avnt2;
avnt2 = temp2;
}
printf("\n");
return (0);
}
