#include<stdio.h>
#include<stdlib.h>

int main()

{
    int i, x, n;

    scanf("%d", &n);

    int s[51] = {0};

    for(i = 0; i < n; i ++) {
        scanf("%d", &x);
        s[x] ++;
    }

    for(i = 0; i <= 50; i ++) {
        if(s[i]) {
            printf("%d:%d\n", i, s[i]);

        }

    }
    return 0;

}