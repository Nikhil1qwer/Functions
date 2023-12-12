#include <stdio.h>

 int num ( int n ) {
 	if (n > 100){
 		printf("True");
	 } else {
	 	printf("False");
	 }
 }
 
   int main () {
   	int n;
   	scanf("%d", &n);
   	
   	num(n);
   	
   }
