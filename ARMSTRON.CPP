  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  // armstrong no <--->
  clrscr();
  int num,ori,rem,sum=0;
  printf("enter any no:");
  scanf("%d",&num);
  while(num>0)
  {
  rem=num%10;
  num=num/10;
  sum=sum+(rem*rem*rem);
  }
  printf("sum=%d",sum);
  if(ori==sum)
  {
  printf("armsrtrong no");
  }
  else
  {
  printf("not armstrong no");
  }
  getch();
  return 0;
  }