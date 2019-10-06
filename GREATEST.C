//program to find greatest of a given list of numbers
#include<stdio.h>
#include<conio.h>
int main ()
{
 int size, i, a[50], greatest = 0;
 clrscr ();
 printf("Enter the total number : ");
 scanf("%d", &size);
 printf("Enter the given numbers : \n");
 for(i=0; i<size; i++)
 {
  printf("%d number is ", i+1);
  scanf("%d", &a[i]);
 }
  printf("\n");
 for(i=0; i<size; i++)
 {
  if(a[i]>greatest)
   greatest=a[i];
 }
 printf("The greatest of the given list of numbers is %d", greatest);
 getch ();
 return 0;
}