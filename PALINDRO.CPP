#include <stdio.h>
#include<conio.h>
int main()
{
clrscr();
// palindrome no <--->
int n;
printf("enter any two no:");
scanf("%d",&n);
c=n;
while(n>0)
{
  r=n%10;
  s=r+(s*10);
  n=n/10;
  if(c==s)
    printf("palindrome no");
  else
    printf("not palindrome no");
getch();
  return 0;
}
