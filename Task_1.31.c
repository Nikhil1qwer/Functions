#include <stdio.h>

 int rev (int n) {
 	int d,num = 0;
 	while (n > 0) {
 		num += n % 10;
 		n /= 10;
	 }
	 return num;
 }
 
   int main (){
   	int n;
   	scanf("%d", &n);
   	printf("%d",rev(n));
   }
