#include<stdio.h>
#include<stdlib.h>
int main(){

    long long int n, sum = 0;
    scanf("%lld", &n);
    long long int arr[n];


        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
    
            sum+=arr[i];
        }
    
        printf("%lld\n", llabs(sum));



    return 0;
}