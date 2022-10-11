#include <stdio.h>
#include <stdlib.h>

void func1(void){
   int x;
   printf("func 1 x is at %p\n", &x);
}

int main(int argc, char *argv[]) 
{
   int x;
   printf("main x is at %p\n", &x);
   func1();
   
   return 0;
}
