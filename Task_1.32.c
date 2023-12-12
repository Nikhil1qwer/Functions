#include <stdio.h>

 int palindrome (int n) {
 	int x,rev = 0,t = n;
 	while (n > 0) {
 		x = n % 10;
 		rev = rev * 10 + x;
 		n /= 10;
	 }
	if ( rev == t ){
		return 1;
	}
	return 0;
 }
   int main () {
   	int n;
   	scanf("%d", &n);
   	printf("%d",palindrome(n));
   }
