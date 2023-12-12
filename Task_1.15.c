#include <stdio.h>

  void per (float m) {
  	if ( m >= 90 ) {
  		printf("O");
	  } else if ( m >= 80 && m < 90 ){
	  	printf("A");
	  } else if ( m >= 70 && m < 90) {
	  	printf("B");
	  } else if ( m >= 60 && m < 70) {
	  	printf("C");
	  } else if ( m >= 50 && m < 60) {
	  	printf("D");
	  } else if ( m >= 35 && m < 50) {
	  	printf("E");
	  } else {
	  	printf("F");
	  }
  }
  
    int main () {
    	float n;
    	scanf("%f", &n);
    	
    	per(n);
    	
	}
