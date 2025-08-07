#include<stdio.h>
int main(){

    int n, last;
    long long int m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lld", &m);
        
        do{
            last = m % 10;
            printf("%d ", last);
            m /= 10;
        }while(m != 0);
        
        printf("\n");
    }

    return 0;
}