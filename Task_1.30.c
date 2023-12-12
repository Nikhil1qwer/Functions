#include <stdio.h> 

  int Abs (int n) {
  	int x, sum = 0, sod = 0;
  	while (n > 0) {
  		x = n % 10;
  		sum += x;
  		sod += x * x;
  		n /= 10;
	  }
	  return sod - sum;
  }
  
    int main () {
    	int n;
    	scanf("%d", &n);
    	printf("%d", Abs(n));
	}
