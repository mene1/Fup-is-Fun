#include <stdio.h>

int main(){

    char op1; char op2; 

    scanf("%c %c", &op1, &op2);

    if(op1 == op2){
        printf("empate\n");
    } else if(op1 == 'r'){
        if(op2 == 's'){
            printf("jog1\n");
        } else printf("jog2\n"); 
    } else if(op1 == 'p'){
        if(op2 == 'r'){
            printf("jog1\n");
        } else printf("jog2\n");
    } else if(op1 == 's'){
        if(op2 == 'p'){
            printf("jog1\n");
        } else printf("jog2\n");
    }

    return 0;
}
