#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,temp;
scanf("%d",n);
temp=n;
while(n!=0)
{
  rev=rev*10;
rev=rev+n%10;
n=n/10;
}
if(temp==rev)
{
printf("it is palindrome number");
}
else
{
printf("it is not a palindrome number");
}
getch();
}
