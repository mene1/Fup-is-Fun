#include <stdio.h>

int main(){

    int v1; int v2; int v3;

    scanf("%d %d %d", &v1, &v2, &v3);


    if(v1 > v2){
        if (v2 > v3){
            printf("%d\n", v2);
        } else if (v1 > v3){
            printf("%d\n", v3);
        } else printf("%d\n", v1);

    } else if(v1 > v3){
        if (v3 > v2){
            printf("%d\n", v3);
        } else if (v1 > v2){
            printf("%d\n", v2);
        } else printf("%d\n", v1);

    } else if(v2 > v3){
        if (v3 > v1){
            printf("%d\n", v3);
        } else if (v2 < v1){
            printf("%d\n", v1);
        } else printf("%d\n", v2);
    }

    return 0;
}