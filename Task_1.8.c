#include <stdio.h>

int e_o (int n)
{
	if (n % 2 == 0)
	{
		printf("Even"); 
	} else {
		printf("Odd");
	}
	
} 
  int main ()
  {
  	int n;
  	scanf("%d", &n);
  	
  	e_o(n);
  	
  }
