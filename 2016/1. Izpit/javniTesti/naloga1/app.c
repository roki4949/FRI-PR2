#include <stdio.h>

int numSum(int n){

    int total = 0;

    while(n > 0){
        total += n % 10;
        n /= 10;
    }

    return total;
}

int main(){
    int p, q, k;
    scanf("%d %d %d", &p, &q, &k);
    int mul = p*q;
    
    int value = mul;
    
    for(int i = 0; i < k; i++){
        
        value = numSum(value);
        
    }
    
    printf("%d\n", value);

    return 0;
}
