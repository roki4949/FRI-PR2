#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char niz[10000];
    
    int total = 0;
    
    while(scanf("%s", niz) != EOF){
        
        int jeStevilo = 1;
        
        for(int i = 0; i < strlen(niz); i++){
        
            if(niz[i] >= '0' && niz[i] <= '9'){
                
                
            } else {
                jeStevilo = 0;
            }
        }
        
        if(jeStevilo){
            for(int j = 0; j < strlen(niz); j++){
                total += (niz[j] - '0')* pow(10,strlen(niz) - j - 1);
                //printf("%d\n", total);
            }
        }
        
        //printf("\n");
    }
    
    printf("%d\n", total);
    
    return 0;
}
