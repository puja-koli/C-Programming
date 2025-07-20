#include <stdio.h>

int main() {
	int i, j, N;
	scanf("%d", &N);
	
	for(i = 2; i <= N; i++) {
		int prime = 1;
		for(j = 2; j < i; j++) {	
			if(i%j == 0 ) {	
				prime = 0;		
				break;				
			}
		}								
			if(prime) {									
			   printf("%d ", i);																								
		}																		
	}																			
return 0	;																																				
}