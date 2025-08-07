#include<stdio.h>
int main(){

    int n1, n2, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n1);

    for(int i = 0; i < n1; i ++){
        scanf("%d ", &n2);

       if(n2 % 2 == 0){
        even++;
        if(n2 > 0){
            positive++;
        }else if(n2 < 0){
            negative++;
        }
       }else{
        odd++;
        if(n2 > 0){
            positive++;
        }else if(n2 < 0){
            negative++;
        }
       }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}