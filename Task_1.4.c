#include <stdio.h>

int upp ( char ch )
{
	return ch - 32;
} 
  int main () 
  {
  	char ch;
  	scanf("%c",&ch);
  	
  	printf("%c", upp(ch) );
  	
  }
