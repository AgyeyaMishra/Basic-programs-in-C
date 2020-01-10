//C program to read the contens of a given file, convert them to upper case and write the contents to another file
#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fp1, *fp2;
 char a;
 clrscr();
 fp1=fopen("input.txt", "r");
 if(fp1==NULL)
 {
  printf("Cannot open this file.");
  exit(1);
 }
 fp2=fopen("output.txt", "w");
 if(fp2==NULL)
 {
  printf("Cannot open this file.");
  fclose(fp1);
  exit(1);
 }
 do
 {
  a=fgetc(fp1);
  a=toupper(a);
  fputc(a, fp2);
 }while(a!=EOF);

 printf("File successfully copied.");
 fclose(fp1);
 fclose(fp2);

 getch();
 return 0;
}