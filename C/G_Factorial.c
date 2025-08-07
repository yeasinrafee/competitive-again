#include<stdio.h>
int main(){

    int n, m;
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        long long int fact = 1;
        for(int j = 1; j <= m; j++){
            if(m == 0){
                printf("1\n");
            }
            fact *= j;
        }
        printf("%lld\n", fact);
    }
    
    return 0;
}