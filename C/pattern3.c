#include<stdio.h>
int main(){

	int n;
	scanf("%d", &n);
	int str = n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			printf(" ");
		}
		for(int k = str; k > 0; k--){
			printf("*");
		}
		printf("\n");
		str--;
	}
	
	return 0;
}