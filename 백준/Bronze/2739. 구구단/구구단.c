#include <stdio.h>

int main() {
    int input = 0;
    scanf("%d", &input);
    int max = 10;
    for(int i = 1; i < max; i++) {
        int result = input * i;

        printf("%d * %d = %d", input, i, result);
        if (i < max - 1) {
            printf("\n");
        } 
    }
    
}