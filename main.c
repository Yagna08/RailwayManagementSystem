#include "acc.c"
#include "allImports.h"
#include "display.c"

struct node {
  int data;
  struct node *next;
} *head = NULL;



void displayLL();
void insert();
void delete ();

int main() {
  // system("color f1");
  display();
  return 0;
}