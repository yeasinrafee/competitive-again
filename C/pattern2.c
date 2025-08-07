#include<stdio.h>
int main(){

	int n;
	scanf("%d", &n);
	int str = 1;
	int space = n - 1;

	for(int i = 0; i < n; i++){
		for(int j = space; j > 0; j--){
			printf(" ");
		}
		for(int k = str; k <= i+1; k++){
			printf("%d ", k);
		}
		printf("\n");
		space--;
	}
	
	return 0;
}