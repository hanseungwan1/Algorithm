#include <stdio.h>

int main(void){
    int number = 0;
    scanf("%d", &number);
    
    int arr[number];
    for(int i = 0; i < number; i++){
        scanf("%d", &arr[i]);
    }
    int target = 0;
    
    scanf("%d", &target);
    
    int count = 0;
    for(int i = 0; i < number; i++){
        if(arr[i] == target){
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}