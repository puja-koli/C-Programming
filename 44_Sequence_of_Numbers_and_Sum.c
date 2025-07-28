#include <stdio.h>

int main() {
	int A, B, N, x;
	
	while(1) {
		scanf("%d %d", &A, &B);
	if(A > 0 && B > 0 ) {
	 int  sum = 0;  
 	if (A>B) {
	N = A;
	x = B;
	}
	else {
	N = B;
	x = A;
	}
	for(int i = x; i <= N; i++ ) {
		printf("%d ", i);
		sum = sum + i;
	}
	printf("sum =%d\n", sum);	
		
	}
	else {	
	break;			
	}										
} 
return 0;
}