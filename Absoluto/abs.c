#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1 = 0; int n2 = 0; int res = 0;

    scanf("%d %d", &n1, &n2);

    if(n1 >= n2){
        res = n1 - n2;
        res = abs(res);
    } else {
        res = n2 - n1;
        res = abs(res);
    }

    printf("%d\n", res);

    return 0;
}