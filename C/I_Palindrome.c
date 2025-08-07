#include<stdio.h>
#include<string.h>
int main(){

    char s[1001];
    scanf("%s", &s);
    

    int i = 0;
    int j = strlen(s) - 1;
    int is_palindrome = 1;

    while (i < j)
    {
        if(s[i] == s[j]){
            is_palindrome = 1;
        }else {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(is_palindrome){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    

    return 0;
}