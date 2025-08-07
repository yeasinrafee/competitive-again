#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int found = 0;
    for(int i = 2; i <= n; i += 2) {
        printf("%d\n", i);
        found = 1;
    }

    if(!found) {
        printf("-1\n");
    }

    return 0;
}