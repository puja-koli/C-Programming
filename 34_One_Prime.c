#include <stdio.h>

int main() {
	int i, X;
	scanf("%d", &X);
	
	if(X<2) {				
		printf("NO\n");				
	    }									
	int prime = 1;	
	for(i =2; i < X; i++ ) {		
						
		if(X%i == 0) {				
		prime = 0;
		break;		
	    }
	 }   									
	 if( prime ) {						
		printf("YES\n");				
	    }						
	else {							
		printf("NO\n");								
											
	}											
return 0;																				
}