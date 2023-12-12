#include <stdio.h>

  int alpha (char ch) {
  	if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) {
  		return 1;
	  }
	return 0;
  }
  
  int main () {
  	char ch;
  	scanf("%c", &ch);
  	printf("%d", alpha(ch));
  }
