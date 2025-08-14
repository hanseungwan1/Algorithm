#include <stdio.h>
#include <string.h>

int main(void){   
    int a = 0;
    scanf("%d", &a);
    char star[a + 1];
    star[0] = '\0';

    for(int i = 0; i < a; i++){
        strcat(star, "*");       
        printf("%s\n", star);
    }

    
}