#include <stdio.h>

int latin ( int n )
{
	return '@' + n;
} 
  int main () 
  {
  	int n;
  	scanf("%d",&n);
  	
  	if ( n > 0 && n < 27)
  	{
  		printf("%c", latin (n) );
	  } else {
	  	printf("Error! Enter the number between 1 and 26");
	  }
  	
  }
