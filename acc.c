#include "allImports.h"

// Global Variables
bool accessRights = false;

FILE *ptr;

void user() {
  bool flag = false;
  int ch;
  char id[100], pass[100], str[200];

  fflush(stdin);
  puts("1. Sign Up\n2. Login");
  scanf("%d", &ch);
  // system("cls");


  
  if (ch == 1) {
    int d = 0, u = 0, l = 0, s = 0;
    ptr = fopen("user.txt", "a");
    puts("1. Enter Your Username");
    scanf("%s", id);
    puts("2. Enter your password");
    
  pswd:
  
    scanf("%s", pass);
    for (int i = 0; i < strlen(pass); i++) {
      if (isdigit(pass[i]))
        d = 1;
      else if (isupper(pass[i]))
        u = 1;
      else if (islower(pass[i]))
        l = 1;
      else
        s = 1;
    }
    if (d == 1 && u == 1 && l == 1 && s == 1 && strlen(pass) >= 8) {
      strcpy(str, id);
      strcat(str, " ");
      strcat(str, pass);
      strcat(str, "\n");
      fprintf(ptr, "%s", str);
    } else {
      printf("Please Enter a valid password\n");
      goto pswd;
    }
  }
  
  
  else if (ch == 2) {
    ptr = fopen("user.txt", "r");
    
  lgn:
  
    puts("Enter Your Username & password");
    scanf("%s%s", id, pass);
    strcpy(str, id);
    strcat(str, " ");
    strcat(str, pass);
    strcat(str, "\n");
    char line[100];
    while (fgets(line, 200, ptr)) {
      // sscanf(ptr,line);
      // printf("%s\n", line);
      if (strcmp(line, str) == 0) {
        puts("Login successful");
        flag = true;
        break;
      }
    }
    if (!flag) {
      puts("Login failed");
      goto lgn;
    }
  }
  fclose(ptr);
}

void admin() {
  bool flag = false;
  int ch;
  char id[100], pass[100], str[200];
  ptr = fopen("admin.txt", "r");
  
Adminlgn:

  puts("Login Portal:");
  puts("Enter Your Username & password");
  scanf("%s%s", id, pass);
  strcpy(str, id);
  strcat(str, " ");
  strcat(str, pass);
  strcat(str, "\n");
  char line[100];
  while (fgets(line, 200, ptr)) {
    // sscanf(ptr,line);
    // printf("%s\n", line);
    if (strcmp(line, str) == 0) {
      puts("Login successful");
      flag = true;
      accessRights = true;
      break;
    }
  }
  if (!flag) {
    puts("Login failed");
    goto Adminlgn;
  }
}
