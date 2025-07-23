#include <stdio.h>

int main() {
int i, N;
	scanf("%d", &N);
	int A[N];

for(i = 0; i < N; i++) {			
		scanf("%d", &A[i]);
		
}
for(i = 0; i < N; i++) {
																																								
	if(A[i] < 0) {
		printf("2 ");
	}
	if(A[i] > 0) {
		printf("1 ");
	}
	if(A[i] == 0) {
		printf("0 ");
	}
}		
return 0;
}
