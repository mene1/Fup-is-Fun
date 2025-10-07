#include <stdio.h>

int main(){

    int n1 = 0; int n2 = 0;

    scanf("%d %d", &n1, &n2);

    if(n1 >= n2){
        printf("%d\n", n1);
        return 0;
    } else if(n2 > n1){
        printf("%d\n", n2);
        return 0;
    }
}