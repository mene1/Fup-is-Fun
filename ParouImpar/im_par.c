#include <stdio.h>

int main(){

    int p = 0; int d1 = 0; int d2 = 0;

    scanf("%d %d %d", &p, &d1, &d2);

    if(p == 0 || p == 1 && 5 <= d1 >= 0 && 5 <= d2 >= 0){
        if(!p){
            if((d1+d2)%2 == 0){
                printf("0\n");    
            } else printf("1\n");  
        }
    
        if(p){
            if((d1+d2)%2 == 0){
                printf("1\n");   
            } else printf("0\n");
        }
    }
}