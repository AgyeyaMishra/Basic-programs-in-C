//program to swap two numbers without using temporary variable
#include<stdio.h>
#include<conio.h>
int main()
{
 int no1, no2;
 clrscr ();
 printf("Enter the first number : ");
 scanf("%d", &no1);
 printf("Enter the second number : ");
 scanf("%d", &no2);
 no1 = no1 + no2;
 no2 = no1 - no2;
 no1 = no1 - no2;
 printf("Numbers after swapping are : \n");
 printf("First number : %d\n", no1);
 printf("Second number : %d", no2);
 getch ();
 return 0;
}
