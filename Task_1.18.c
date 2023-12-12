#include <stdio.h>

  void Char (char ch) {
  	if ( ch >= 'A' && ch <= 'Z') {
  		printf("CAPITAL");
	  } else {
	  	printf("SMALL");
	  }
  }
  
    int main () {
    	char ch;
    	scanf("%c", &ch);
    	  Char(ch);
	}
