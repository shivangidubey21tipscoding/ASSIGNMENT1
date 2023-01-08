#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int g,s,a,b,gold,sil;
printf("enter coins per gram of gold:");
scanf("%d",&g);
printf("enter coins per gram of silver:");
scanf("%d",&s);
printf("grams of gold:");
scanf("%d",&a);
printf("grams of silver:");
scanf("%d",&b);
printf("%d %d %d %d \n",g,s,a,b);
gold=g*a;
sil=s*b;
if(gold>sil)
printf("gold");
else
printf("silver");
getch();
}