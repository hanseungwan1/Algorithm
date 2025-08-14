#include <stdio.h>

int main() {
    int num = 0, target = 0;
    scanf("%d %d", &num, &target);
    
    
    
    for(int i = 0; i < num; i++){
       int result = 0;
        scanf("%d", &result);
        if(result < target){
            printf("%d ", result);
        }
    }

    
    return 0;
}