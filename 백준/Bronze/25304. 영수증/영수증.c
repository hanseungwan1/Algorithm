#include <stdio.h>
int main(void){
    
    int total_sum = 0;
    int total_num = 0;
    
    scanf("%d", &total_sum);
    scanf("%d", &total_num);
    
    
    int sum = 0;
    for(int i = 0; i < total_num; i++){
        int price = 0;
        int number = 0;
        
        scanf("%d %d", &price, &number);
        
        sum += price * number;
    }
    if(total_sum == sum){
        printf("Yes");
    } else{
        printf("No");
    }
    
}