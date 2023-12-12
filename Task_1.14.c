#include <stdio.h> 

  int eve ( int s) {
  	if ( s <= 34) {
  		return 1;
	  }
	return 0;
  }
  
   int main () {
   	int arr[5];
   	int count = 0;
   	
   	for (int i = 0; i < 5; i++) {
   		scanf("%d", &arr[i]);
   		
   		if (eve(arr[i])){
   			count++;
		   }
   		
	   }
	   
	   printf("%d", count);
   }
