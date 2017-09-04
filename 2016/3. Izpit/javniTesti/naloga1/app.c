#include <stdio.h>
#include <math.h>
int jePra(int n){
    
    int status = 1;
    
    for(int i = 2; i < n/2; i++){
        if(n % i == 0){
            status = 0;
        }
    }
    
    return status;
}

int main(){

    int n, k;
    scanf("%d %d", &n, &k);
    
    for(int i = n+1; 1;i++){        
        if(k == 1 && jePra(i)){
            printf("%d\n", i);
            return 1;
        }
        
        if(jePra(i)){
            k--;
        }
    }

    return 0;
}
