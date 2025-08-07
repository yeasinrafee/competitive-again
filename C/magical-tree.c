#include<stdio.h>
int main(){

	int n;
	scanf("%d", &n);
	int str = 1;
	int sps = (5 + ((n - 1) / 2));

	for(int i = 1; i <= (5 + ((n + 1) / 2)); i++){
		for(int j = i; j < (5 + ((n + 1) / 2)); j++){
			printf(" ");
		}

		for(int k = 1; k <= (2 * i - 1); k++){
			printf("*");
		}

		printf("\n");
	}

	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			printf(" ");
		}

		for(int k = 1; k <=n; k++){
			printf("*");
		}

		printf("\n");
	}
	

	return 0;
}