#include <stdio.h>

  int price (int cp, int sp) {
  	if ( sp > cp ) {
  		return 1;
	  } else {
	  	return 0;
	  }
  } 
  
  int main () {
  	int a,b;
  	scanf("%d %d", &a, &b);
  	printf("%d", price(a,b));
  }
