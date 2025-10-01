#include <stdio.h>

int main(){
    
    int n1 = 0; int n2 = 0;
    
    scanf("%d %d", &n1, &n2);

    int resp = n1/n2;
    int resto = n1%n2;
    
    printf("%d %d\n", resp, resto);
    
    return 0;
}