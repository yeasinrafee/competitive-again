#include<stdio.h>
int main(){

	int n;
	scanf("%d", &n);
	int space;

	for(int i = 1; i <= n; i++){
		for(space = 1; space <= n - i; space++){
			printf(" ");
		}
		for(int k = i; k >= 1; k--){
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}