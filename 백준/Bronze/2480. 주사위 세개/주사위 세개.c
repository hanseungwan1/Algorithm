#include <stdio.h>
int main(void){
    
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int result = 0;
    
    if( a == b && b == c){
        result = 10000 + a * 1000;
    } else if((a == b && b != c) || (b == c && b != a) || (c == a && c != b)){
        if(a == b && b != c){
            result = 1000 + a * 100;
        } else if(b == c && b != a){
            result = 1000 + b * 100;
        } else{
            result = 1000 + c * 100;
        }
    } else {
        int max = a;
        if(max < b){
            max = b;
        }
        if(max < c){
            max = c;
        }
        result = max * 100;
    }
    
    printf("%d", result);
    
}