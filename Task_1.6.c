#include <stdio.h>

  int prt (int a, int b)
  {
  	return a * b;
  }
  
    int main ()
    {
    	int a,b;
    	scanf("%d %d", &a, &b);
    	printf("%d", prt (a,b));
	}
