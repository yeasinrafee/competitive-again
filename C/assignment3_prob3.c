#include<stdio.h>

int count_before_one(int arr[], int size){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] != 1){
			count++;
		}else{
			break;
		}
	}

	return count;
}

int main(){

	int N;
	scanf("%d", &N);

	int A[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}

	int result = count_before_one(A, N);
	printf("%d\n", result);

	return 0;
}