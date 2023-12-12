#include <stdio.h>

  char grade (char ch1, char ch2, int a) {
  	int x = (int)ch1 + (int)ch2 ;
  	if ( x % a == 0 ) {
  		return 'Y';
	  }
	  return 'N';
  } 
  
   int main () {
   	int a;
   	char b,c;
   	scanf("%c %c %d", &b, &c, &a);
   	
   	printf("%c",grade(b,c,a));
   	
   }
