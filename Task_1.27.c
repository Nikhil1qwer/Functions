#include <stdio.h> 

  int SumFact (int n) {
  	int sum = 0;
  	for (int i = 1; i <= n; i++) {
  		if (n % i == 0) {
  			sum += i;
		  }
	  }
	  return sum;
  }
    int main () {
    	int n;
    	scanf("%d", &n);
    	printf("%d",SumFact(n));
	}
