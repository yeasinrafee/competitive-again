#include<stdio.h>
#include<string.h>

int is_palindrome(char s1[]){
	
	int flag = 0;
	for(int i = 0; i < strlen(s1); i++){
		if(s1[i] != s1[strlen(s1) - i - 1]){
			flag = 0;
			break;
		}else{
			flag = 1;
		}
	}
	return flag;
}
int main(){

	char S[1001];
	scanf("%s", S);

	int flag = is_palindrome(S);

	if(flag == 1){
		printf("Palindrome\n");
	}else if(flag == 0){
		printf("Not Palindrome\n");
	}
	return 0;
}