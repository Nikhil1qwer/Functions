#include <stdio.h>

  int div (int a, int b) {
  	if (a % b == 0){
  		return 1;
	  } else {
	  	return 0;
	  }
  }
  
   int main () {
   	int a,b;
   	scanf("%d %d", &a, &b);
   	
   	printf("%d", div(a,b));
   	
   }
