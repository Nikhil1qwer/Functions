#include <stdio.h>

  int fact(int a, int b, int c) {
  	
  	if ( (a + b) % c == 0) {
  		return 1;
	  }
	  return 0;
  } 
  
   int main () {
   	int a,b,c;
   	scanf("%d %d %d", &a, &b, &c);
   	
   	printf("%d",fact(a,b,c));
   	
   }
