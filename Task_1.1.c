#include<stdio.h> 

 int rem (int a, int b)
 {
 	printf("%d", a % b);
 }
   int main ()
   {
   	int a,b;
   	scanf("%d %d", &a, &b);
   	rem ( a, b );
   }
