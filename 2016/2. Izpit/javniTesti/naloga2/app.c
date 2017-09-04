#include <stdio.h>
#include <math.h>

int main(){

    int p, q, d;
    scanf("%d %d %d", &p,&q,&d);
    
    int mem[p*q][2];
    
    for(int y = 0; y < p; y++){
        for(int x = 0; x < q; x++){
            int tmp;
            scanf("%d", &tmp);
            mem[tmp][0] = x; // x
            mem[tmp][1] = y; // y
        }
    }
    
    int value = 0;
    
    for(int i = 1; i < p*q; i++){
        d-= abs(mem[i-1][0] - mem[i][0]);
        d-= abs(mem[i-1][1] - mem[i][1]);  
        
        if(d < 0){
            break;
        } else {
            value = i;
        }     
    }
    
    
  
    
    printf("%d\n", value);
    
    
    

    return 0;
}