#include <stdio.h>

int main(){

    int n[1000];
    
    char p;
    scanf("%c", &p);
    int m = 0;
    n[0] = 0;
    
    for(int i = 1; p != ' '; i++){
        n[i] = p - '0';
        scanf("%c", &p);
        m = i;
    }
    
    int k;
    scanf("%d", &k);
    
    for(int i = m; i >= 0; i--){
        n[i] = n[i]*k; 
    }
    
    for(int i = m; i > 0; i--){
        if(n[i]){
            n[i-1] += n[i] / 10;
            n[i] %= 10;
        }
    }
    
    for(int i = 0; i <= m; i++){
        if(i == 0 && n[i] == 0){
        
        } else {
            printf("%d", n[i]);
        }
        
    }
    
    printf("\n");

    return 0;
}
