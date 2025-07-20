#include <stdio.h>

int main() {
	long int N, x, original, reversed; 
	reversed = 0;
	scanf("%ld", &N);	
	 original = N;		
				
	while(N !=0) {				
			x = N % 10;					
			reversed = reversed * 10 + x;				
			N /= 10;					
	}								
	if(original == reversed) {									
		printf("%ld\n", reversed );									
		printf("YES\n");										
	}												
	else {
			printf("%ld\n", reversed );													
			printf("NO\n");												
	}															
return 0;																											
}