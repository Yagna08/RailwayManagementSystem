/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
*                        Happy Coding
***********************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
 char pasword[10],usrname[10], ch;
 int i;

 printf("Enter User name: ");
  scanf(const char *restrict __format, ...)
 printf("Enter the password <any 8 characters>: ");

 for(i=0;i<8;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }

 pasword[i] = ' ';

 /*If you want to know what you have entered as password, you can print it*/
 printf("nYour password is :");

 for(i=0;i<8;i++)
 {
  printf("%c",pasword[i]);
 }
  return 0;
}