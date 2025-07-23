#include <stdio.h>

int main() {
int i, N;
	scanf("%d", &N);
	long long A[N];
	
int position = -1;
for(i = 0; i < N; i++) {			
		scanf("%lld", &A[i]);
  }    
long long X;
scanf("%lld", &X);

for(i = 0; i < N; i++) {
	if(A[i] == X) {
	position = i;
	break;
	}
}	
printf("%d\n", position);
return 0;
	
}