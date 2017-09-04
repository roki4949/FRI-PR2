#include <stdio.h>

int n;

int getOut(int map[n][2], int holder[n],int d, int globina){
    //printf("Call: getOut(map, %d, %d)\n", d, globina);
    
    holder[globina] = d;

    if(globina < n-1){
    
        for(int i = map[globina+1][0]; i <= map[globina+1][1]; i++){
            getOut(map, holder, i, globina+1);
        }
        
    } else {
        for(int i = 0; i < n; i++){
            printf("%d", holder[i]);
        }
        printf("\n");
    
    }
    
    
    return 0;
}

int main(){

    scanf("%d", &n);
    
    int holder[n];
    
    int map[n][2];
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &map[i][0], &map[i][1]);
    }
    
    for(int i = map[0][0]; i <= map[0][1]; i++){
        getOut(map, holder, i, 0);
    }
    
    return 0;
}
