#include <stdio.h>

int ren (int n)
{
	if (n % 2 == 0)
	{
		return 1; 
	} else {
		return 0;
	}
	
} 
  int main ()
  {
  	int n;
  	scanf("%d", &n);
  	
  	printf("%d", ren (n));
  	
  }
