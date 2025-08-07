#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n+1];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int idx, ele;
    scanf("%d %d", &idx, &ele);

    for(int i = n; i >= idx; i--){
        arr[i] = arr[i-1];
    }

    arr[idx] = ele;

    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}