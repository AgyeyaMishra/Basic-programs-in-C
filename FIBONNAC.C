//program to print fibonacci sequence
#include<stdio.h>
#include<conio.h>
int main()
{
 int n, i, a[50];;
 clrscr ();
 printf("How many terms of fibonnaci sequence do you want to print ? (max 50): ");
 scanf("%d", &n);
 for(i=0; i<n; i++)
 {
  if(i<2)
   a[i]=i;
  else
   a[i]=a[i-1]+a[i-2];
 }
 printf("Fibonacci sequence for given number of terms is :-\n");
 for(i=0; i<n; i++)
  printf("%d ", a[i]);
 getch ();
 return 0;
}