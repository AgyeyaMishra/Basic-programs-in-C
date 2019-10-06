//program for pattern printing
#include<stdio.h>
#include<conio.h>
int main()
{
 int row, i, j;
 clrscr ();
 printf("Enter the number of rows : ");
 scanf("%d", &row);
 printf("The pattern is : \n");
 for(i=0; i<row; i++)
 {
  for(j=0; j<=i; j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 getch ();
 return 0;
}
