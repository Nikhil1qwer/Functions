#include <stdio.h>

  char per (float m) {
  	if ( m >= 90 ) {
  		return 'O';
	  } else if ( m >= 80 && m < 90 ){
	  	return 'A';
	  } else if ( m >= 70 && m < 90) {
	  	return 'B';
	  } else if ( m >= 60 && m < 70) {
	  	return 'C';
	  } else if ( m >= 50 && m < 60) {
	  	return 'D';
	  } else if ( m >= 35 && m < 50) {
	  	return 'E';
	  } else {
	  	return 'F';
	  }
  }
  
    int main () {
    	float n;
    	scanf("%f", &n);
    	
    	printf("%c",per(n));
    	
	}
