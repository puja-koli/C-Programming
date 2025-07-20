#include <stdio.h>

int main(){
int i,even,N;
even=0;
scanf("%d",&N);
for( i=1;i<=N;i++){
	 if(i%2==0){
		printf("%d\n",i);
		even=1;
	}

}	
if(!even){
	printf("-1\n");	
}
		return 0;
}