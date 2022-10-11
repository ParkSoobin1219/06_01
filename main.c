#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a,int b){
   int sum;
   sum=a+b;
   return sum;
}

int square(int n){
   int square;
   square=n*n;
   return square;
}

int get_max(int x,int y){
   if(x<y)
     return y;
   else if(x>y)
     return x;
}


int main(int argc, char *argv[]) 
{
   int x,y;
   
   printf("input 2 integers: ");
   scanf("%d%d", &x,&y);
   
   printf("the sum of 2 integers is %d\n", sumTwo(x,y));
   printf("the square of the 1st integer is %d\n", square(x));
   printf("the square of the 2nd integer is %d\n", square(y));
   printf("the bigger integer is %d\n", get_max(x,y));
   
   return 0;
}
