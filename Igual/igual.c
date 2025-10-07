#include <stdio.h>

int main(){

    int v1; int v2; int v3; int aux = 0;

    scanf("%d %d %d", &v1, &v2, &v3);

    if (v1 == v2){
        aux++;
        if(v1 == v3){
            aux++;
            printf("%d\n", aux);
            return 0;
        }
        printf("%d\n", aux);
        return 0;
    }
    
    if (v2 == v3){
        aux++;
        printf("%d\n", aux);
        return 0;
    }
}