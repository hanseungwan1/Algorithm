#include <stdio.h>

int main(void){
    while(1){
        int a = 0, b = 0;
        if (scanf("%d %d", &a, &b) != 2) {
            break;
        }
        printf("%d\n", a + b);
    }
    
    return 0;
}