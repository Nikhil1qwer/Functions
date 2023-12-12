#include <stdio.h>

  void siri (int n) {
  	for (int i = 1; i <= n; i++) {
  		printf("%d ",i);
	  }
  }
   
    int main () {
    	int n;
    	scanf("%d", &n);
    	siri(n);
	}
