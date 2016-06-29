#include<stdio.h>
#include<conio.h>
void main()
{
int base,exponent;
long long result=1;
printf("Enter a base number:");
scanf("%d",&base);
printf("Enter a exponent:4");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("Answer =%11d", result);
getch();
}
