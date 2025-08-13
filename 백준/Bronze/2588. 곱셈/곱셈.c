#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    
    int B = b;
    for (int i = 0; i < 3; i++) {
        int index = B % 10;
        printf("%d\n", a * index);
        B = B / 10;
    }
    printf("%d", a * b);
    return 0;
}
