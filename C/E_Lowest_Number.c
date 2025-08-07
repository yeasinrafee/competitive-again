#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    int lowest = INT_MAX;
    int position = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if( arr[i] < lowest){
            lowest = arr[i];
            position = i + 1;
        }
    }

    printf("%d %d\n", lowest, position);

    return 0;
}