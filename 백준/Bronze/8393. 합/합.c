#include <stdio.h>
int main(void){
    
    int num = 0;
    scanf("%d", &num);
    
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    printf("%d", sum);
}