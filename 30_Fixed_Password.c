#include <stdio.h>

int main() {
	
	int i,  password;
	
	for(; ; ) {
		scanf("%4d", &password);
		
		if(password != 1999) {
			printf("Wrong\n");
		}
		else {
				printf("Correct\n");
				break;	
		}

	}
return 0;
	
}