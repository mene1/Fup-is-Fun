#include <stdio.h>

int main(){

    char op1; char op2; 

    scanf("%c %c", &op1, &op2);

    // se 1 e 2 sao iguais
    // se 1 r -> p ou s
    // se 1 p -> r ou s
    // se 1 s -> p ou r

    if(op1 == op2){
        printf("empate\n");
    } else if(op1 == 'r'){
        ;
    } else if(op1 == 'p'){
        ;
    } else if(op1 == 's'){
        ;
    }

    return 0;
}
