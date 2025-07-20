#include <stdio.h>
#include <math.h>

int main(){
int A,C;
long long B,D;
scanf("%d %lld %d %lld",&A,&B,&C,&D);
double X=B*log(A);
double Y=D*log(C);

if(X>Y){
printf("YES\n");
}
else {
printf("NO\n");
}
return 0;
}