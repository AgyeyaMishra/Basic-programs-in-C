//program to check whether a number is prime or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
 int n, i, flag = 1;
 clrscr ();
 printf("Enter a number : ");
 scanf("%d", &n);
 for(i=2; i<=(sqrt(n)/2); i++)
 {
  if(n%i==0)
  {
   flag=0;
   break;
  }
 }
 if(flag==1)
  printf("%d is a prime number", n);
 else
  printf("%d is not a prime number", n);
 getch ();
 return 0;
}
