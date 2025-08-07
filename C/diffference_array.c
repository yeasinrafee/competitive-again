#include<stdio.h>
#include<stdlib.h>
int main(){

	int t, n;
	scanf("%d", &t);


	while(t != 0){
			scanf("%d", &n);

	int A[n], B[n], C[n];
		for(int i = 0; i < n; i++){
		scanf("%d", &A[i]);

		B[i] = A[i];
	}

	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(B[j] < B[i]){
				int temp = B[i];
				B[i] = B[j];
				B[j] = temp;
			}
		}
	}

	for(int i = 0; i < n; i++){
		C[i] = abs(A[i] - B[i]);
	}


	for(int i = 0; i < n; i++){
		printf("%d ", C[i]);
	}
	printf("\n");
	t--;
	}
	return 0;
}