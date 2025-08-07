#include<stdio.h>
#include<limits.h>
int main(){
    int max = INT_MIN;
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i <n; i++){
        scanf("%d", &m);
        if(  m > max){
            max = m;
        }
    }
    printf("%d\n", max);
    

    return 0;
}