#include <stdio.h>
#include <string.h>

int main(void){   
    int a = 0;
    scanf("%d", &a);
    char star[a];
    for(int i = 0; i < a; i++){
        star[i] = ' ';
    }
    star[a] = '\0';
    
    for(int i = a - 1; i >= 0; i--){
        star[i] = '*';
        printf("%s\n", star);
    }

    
}