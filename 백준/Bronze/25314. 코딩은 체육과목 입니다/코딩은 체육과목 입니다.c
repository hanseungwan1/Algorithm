#include <stdio.h>
#include <string.h>

int main(void){   
    int a = 0;
    scanf("%d", &a);
    
    int number = a / 4;
    char result[5 * number + 5];
    result[0] = '\0';
    
    for(int i = 0; i < number; i++){
        strcat(result, "long ");
    }
    strcat(result, "int");
    
    printf("%s", result);
    
}