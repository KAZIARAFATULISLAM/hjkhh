#include<stdio.h>
#include<conio.h>

main()
{
int year;
scanf("%d",&year);
printf("ENTER A YEAR : ")

if((year%4==0)&&((year%100==0)||(year%400!=0)))
printf("%d is leaf year",year);

else
printf("%d is not leaf year",year);
}
