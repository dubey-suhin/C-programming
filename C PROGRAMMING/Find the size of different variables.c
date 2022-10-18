/* sizeof.c
   Finding the size of different variables
*/   

#include <stdio.h>
#include <limits.h>

int main(){
  printf("Size of char is %ld byte.\n", sizeof(char));
  printf("Size of short is %ld bytes.\n", sizeof(short));
  printf("Size of int is %ld bytes.\n", sizeof(int));
  printf("Size of long is %ld bytes.\n", sizeof(long));

  printf("Size of float is %ld bytes.\n", sizeof(float));
  printf("Size of double is %ld bytes\n", sizeof(double));
  printf("Size of long double is %ld bytes\n", sizeof(long double));
  
  return 0;
}






