#include <stdio.h>

int main() {
	int i, j, N, f;
	long long num;
	scanf("%d", &N);

	for(i = 1; i <= N; i++) {
		scanf("%d", &f);
		
		if(f==0) {		
				printf("1\n" );
		continue;
		}
		num =1;
		for(j = 1; j <= f; j++) {
		num=num *j;				
		}
		 printf("%lld\n", num);

}

	return 0;	
	
}