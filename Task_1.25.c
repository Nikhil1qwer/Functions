#include <stdio.h>

 int table (int t, int st, int sp) {
  	for (int i = st; i <= sp; i++) {
  		printf("%d x %d = %d\n", t, i, t*i);
	  }
  }
  
 int main () {
 	int a,b,c;
 	scanf("%d %d %d", &a, &b, &c);
 	table(a,b,c);
 }
