#include <stdio.h>

int main() {
	int A, B, N, gcd;
	scanf("%d %d", &A, &B);
	
	if (A>B) {
	N = A;
	}
	else {
	N = B;
	}
	for(int i = 1; i <= N; i++ ) {
	
		if(A%i == 0 && B%i == 0) {
			gcd = i;	
		}
	}
	printf("%d\n", gcd);
return 0;	
}	