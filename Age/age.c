#include <stdio.h>

int main(){

    char name[30]; int age = 0;

    scanf("%[^\n] %d", name, &age);

    if(age < 12){
        printf("%s eh crianca\n", name);
    } else if(age < 18){
        printf("%s eh jovem\n", name);
    } else if(age < 65){
        printf("%s eh adulto\n", name);
    } else if(age < 1000){
        printf("%s eh idoso\n", name);
    } else {
        printf("%s eh mumia\n", name);
        return 0;
    }
}