#include <stdio.h>
#include <stdlib.h>

int get_integer();
int factorial(int a);
int combination(int x, int y);

int main(int argc, char *argv[]) 
{
   int n,r;
   
   n=get_integer();
   r=get_integer();
   
   printf("the reseult is %d", combination(n,r));

   return 0;
}

int get_integer(){
   int n;
   printf("input an integer:");
   scanf("%d", &n);
   return n;
}

int factorial(int a){
   int res=1;
   int i=0;
   
   for(i=1;i<(a+1);i++)
     res=res*i;
     
   return res;
}

int combination(int x, int y){
   int combi;
   combi=factorial(x)/factorial(x-y)/factorial(y);
   return combi;
}
