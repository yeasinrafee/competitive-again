#include<stdio.h>
int main(){

	int t;
	scanf("%d", &t);

	while(t != 0){
			long long int m, a, b, c, mul;
	scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

	mul = a * b * c;

	if(mul == 0){
		if(m == 0){
			printf("0\n");
		}else{
			printf("-1\n");
		}
	}else if(m % mul != 0){
		printf("-1\n");
	}else{
		printf("%lld\n", m/mul);
	}
t--;
	}



	return 0;
}