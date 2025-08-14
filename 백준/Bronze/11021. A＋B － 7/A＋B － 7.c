#include <stdio.h>

int main(void){   
    int a = 0;
    scanf("%d", &a);
    
    for(int i = 0; i < a; i++){
        int b = 0, c = 0;
        scanf("%d %d", &b, &c);
        printf("Case #%d: %d\n",i + 1 ,b + c);
    }

    
}