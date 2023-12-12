#include <stdio.h> 

  int nums (int a, int b) {
  	for (int i = a; i <= b; i++) {
  		printf("%d ",i);
	  }
  }
   int main () {
   	int a,b;
   	scanf("%d %d", &a, &b);
   	nums(a,b);
   }
