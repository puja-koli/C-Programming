#include <stdio.h>

int main() {
 char S;
scanf("%c", &S);
int N, n;
scanf("%d", &N);

	for(int i =1; i <= N; i++) {
		scanf("%d", &n);
		
		for(int j =1; j <= n; j++) {
			printf("%c", S);
		}
	printf("\n");
	}
return 0;
}
