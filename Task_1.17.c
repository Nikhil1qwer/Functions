#include <stdio.h>

  int Char (char ch) {
  	if ( ch >= 'A' && ch <= 'Z') {
  		return 1;
	  } return 0;
  }
  
    int main () {
    	char ch;
    	scanf("%c", &ch);
    	printf("%d", Char(ch));
	}
