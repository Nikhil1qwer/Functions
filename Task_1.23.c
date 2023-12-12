#include <stdio.h>

  void even (int n) {
  	for (int i = n; i >= 1; i--){
  		if (i % 2 == 0) {
  			printf("%d ",i);
		  }
	  }
  }
    int main () {
    	int n;
    	scanf("%d", &n);
    	even(n);
	}
