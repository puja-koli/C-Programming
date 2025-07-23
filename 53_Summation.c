#include <stdio.h>
#include <stdlib.h>

int main() {
int N;
	scanf("%d", &N);
	int A[N];
	 long long sum = 0;
			
	for(int i = 0; i < N; i++) {			
		scanf("%d", &A[i]);									
		sum += A[i];				
	}						
	printf("%lld\n", llabs(sum));							
return 0;																																													
}