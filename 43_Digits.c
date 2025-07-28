#include <stdio.h>

int main() {
	int num, T, N;
	scanf("%d", &T);

	for(int i = 1; i <= T; i++ ) {
		scanf("%d", &N);
		
		if (N == 0) {
			printf("%d\n", N);
		continue;
		}
		while (N != 0) {
			num = N % 10;
			N /= 10;
			printf("%d ", num);
			
		}
		printf("\n");		
	}
return 0;	
}