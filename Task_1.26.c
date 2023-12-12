#include <stdio.h>

  int fact (int n) {
  	int count = 2;
  	for (int i = 2; i <= n/2; i++) {
  		if (n % i == 0) {
  			count++;
		  }
	  }
	  return count;
  } 
  
   int main () {
   	int n;
   	scanf("%d", &n);
   	printf("%d",fact(n));
   }
