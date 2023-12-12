#include <stdio.h>
  
  int mark (int n) {
  	if (n > 34) {
  		printf("True");
	  } else {
	  	printf("False");
	  }
  } 
  
   int main () {
   	int n;
   	scanf("%d", &n);
   	
   	mark(n);
   	
   }
