#include <stdio.h>
#include <stdbool.h>

int main(){

    int wifi; int login; int admin;

    scanf("%d %d %d", &wifi, &login, &admin);

    if (!wifi){
        printf("you must connect to wifi\n");
        return 0;
    }
    
    if (!login){
        printf("you need to login first\n");
        return 0;
    }

    if (!admin){
        printf("you must to login as admin\n");
        return 0;
    }

    if(wifi > 0 && wifi > 0 && admin > 0){
        printf("done\n");
        return 0;
    }
}