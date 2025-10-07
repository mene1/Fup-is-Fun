#include <stdio.h>

int main(){

    int n1 = 0; int n2 = 0; char op = 0;

    scanf("%d %d %c", &n1, &n2, &op);

    int result = 0;

    if(op == '+'){
        result = n1 + n2;
        printf("%d\n", result);
        return 0;
    } else if(op == '-'){
        result = n1 - n2;
        printf("%d\n", result);
        return 0;
    } else if(op == '*'){
        result = n1 * n2;
        printf("%d\n", result);
        return 0;
    } else if(op == '/'){
        result = n1 / n2;
        printf("%d\n", result);
        return 0;
    }
}