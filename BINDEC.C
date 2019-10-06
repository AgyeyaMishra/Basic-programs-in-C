//menu driven program to convert a number to decimal and vice versa
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
 int number, ch, a[32], i, digit, sum, j=0, ch1;
 clrscr ();
 do
 {
  printf("Conversion Menu :-\n 1. Decimal to binary\n 2. Binary to decimal\n");
  printf("Enter your choice : ");
  scanf("%d", &ch);
  printf("Enter the number : ");
  scanf("%d", &number);
  switch (ch)
  {
   case 1: {
	    i=0;
	    while(number>0)
	    {
	     a[i]=number%2;
	     number/=2;
	     ++i;
	    }
	    printf("The binary form of the number is ");
	    for(j=(i-1); j>=0; j--)
	     printf("%d", a[j]);
	    printf("\n");
	   }
	   break;
   case 2: {
	    i=sum=0;
	    while(number>0)
	    {
	     digit=number%10;
	     sum+=digit*(pow(2,i));
	     number/=10;
	     i++;
	    }
	    printf("The binary form of the entered number is %d", sum);
	    printf("\n");
	   }
	   break;
   default:{
	    printf("Wrong choice entered! ");
	    printf("\n");
	   }
  }
  printf("Press 1 to continue and 0 to discontinue : ");
  scanf("%d", &ch1);
  printf("\n");
 }while(ch1);
 getch ();
 return 0;
}




