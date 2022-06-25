#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "display.c"
#include "acc.c"


// Global Variables
bool accessRights = false;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void displayLL();
void insert();
void delete ();

int main()
{
    //system("color f1");
    user();
    
    return 0;
}
