#include<stdio.h>
int main(){

    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        max = a;
        if(b > c){
            min = c;
        }else{
            min = b;
        }
    }else if( b > c){
        max = b;
        if(a > c){
            min = c;
        }else {
            min = a;
        }
    }else {
        max = c;
        if(a > b){
            min = b;
        }else{
            min = a;
        }
    }

    printf("%d %d", min, max);

    return 0;
}