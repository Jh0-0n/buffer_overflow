#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char hacker1[8] = {'H','A','C','K','E','R','1','\0'};
  char hacker2[8] = {'H','A','C','K','E','R','2','\0'};
  
  strcpy(hacker2, argv[1]);
  
  printf("\nHacker 2: %s\n", hacker2);
  printf("\nHacker 1: %s\n", hacker1);
  
  system(hacker1);
  
  return 0;
  
}
