#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x, position = -1;
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            position = i;
            break;
        }
    }

    printf("%d\n", position);
    return 0;
}