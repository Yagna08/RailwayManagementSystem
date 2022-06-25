//displays the menu items
#include "allImports.h"


void display(){
  int choice;
  
  ch:
  
    puts("1. Admin\n2. User");
    scanf("%d",&choice);
    if(choice == 2)
    user();
    else if(choice == 1)
    admin();
    else
    {
    printf("Enter Valid Number\n");
    goto ch;
    }
}