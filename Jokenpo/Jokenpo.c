#include <stdio.h>

int main(){

    char op1; char op2; 

    scanf("%c %c", &op1, &op2);

    if(op1 == op2){
        printf("empate\n");
    } else if(op1 == 'R'){
        if(op2 == 'S'){
            printf("jog1\n");
        } else printf("jog2\n"); 
    } else if(op1 == 'P'){
        if(op2 == 'R'){
            printf("jog1\n");
        } else printf("jog2\n");
    } else if(op1 == 'S'){
        if(op2 == 'P'){
            printf("jog1\n");
        } else printf("jog2\n");
    }

    return 0;
}
