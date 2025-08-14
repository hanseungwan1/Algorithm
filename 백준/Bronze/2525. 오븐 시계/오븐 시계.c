#include <stdio.h>
int main(void){
    
    int a = 0, b = 0, c = 0;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    
    b += c;
    while(1){
        if(b > 59){
            b -= 60;
            a += 1;
            if(a > 23){
                a = 0;
            }
        } else {
            break;
        }
    }
    
    printf("%d %d", a, b);
    
}