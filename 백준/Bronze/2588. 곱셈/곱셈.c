#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    
    int target_1 = b % 10;
    int target_10 = (b / 10) % 10;
    int target_100 = b / 100;

    printf("%d\n", a * target_1);
    printf("%d\n", a * target_10);
    printf("%d\n", a * target_100);
    printf("%d\n", a * b);
    
    return 0;
}
