//program to implement switch-case statement
#include<stdio.h>
#include<conio.h>
int main()
{
 int ch, ch1;
 float no1, no2;
 clrscr();
 do
 {
  printf("Calculator menu :-\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
  printf("Enter your choice : ");
  scanf("%d", &ch);
  printf("Enter first number : ");
  scanf("%f", &no1);
  printf("Enter second number : ");
  scanf("%f", &no2);
  switch(ch)
  {
   case 1: {
	    printf("Result : %.2f", (no1+no2));
	    printf("\n");
	   }
	   break;
   case 2: {
	    printf("Result : %.2f", (no1-no2));
	    printf("\n");
	   }
	   break;
   case 3: {
	    printf("Result : %.2f", (no1*no2));
	    printf("\n");
	   }
	   break;
   case 4: {
	    printf("Result : %.2f", (no1/no2));
	    printf("\n");
	   }
	   break;
   default: printf("Wrong choice entered! ");
  }
  printf("Enter 1 to continue and 0 to discontinue : ");
  scanf("%d", &ch1);
  printf("\n");
 }while(ch1);
 getch ();
 return 0;
}
