#include<stdio.h>
int main(){

    char c;
    scanf("%c", &c);
    if(c == 'z'){
        printf("a\n");
    }
    if(c >= 'a' && c < 'z'){
        printf("%c\n", c+1);
    }

    return 0;
}