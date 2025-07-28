#include <stdio.h>

int main() {
	int X, x, Y, N, n, i;
	scanf("%d", &N);
	
	for( i = 1; i <= N; i++ ) {
	int sum = 0;
	scanf("%d %d", &X, &Y);
		if (X>Y) {
	n = X;
	x = Y;
	}
	else {
	n = Y;
	x = X;
	}
	for(int i = x+1; i < n; i++ ) {
		if(i % 2 != 0) {		
		sum = sum + i;
	}
	}
	printf("%d\n", sum);	
		
}	
return 0;	
	
}