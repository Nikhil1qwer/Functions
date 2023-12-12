#include <stdio.h>

int ld (int n)
{
	while (n > 10)
	{
		n /= 10;
	} printf("%d",n);
	
} 
  int main ()
  {
  	int n;
  	scanf("%d", &n);
  	
  	ld(n);
  	
  }
