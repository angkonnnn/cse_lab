#include<stdio.h>
int main()
{
 int y;
 printf("Enter a year: ");
 scanf("%d",&y);
 if(y%4==0&&y%400!=0&&y%100!=0)
 {
    printf("%d is a leapyear",y);
 }
 else{
    printf("%d is not a leapyear",y);
 }
return 0;
}