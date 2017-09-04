#include <stdio.h>

int main(){
    int s, v, n;  
    scanf("%d %d %d", &s, &v, &n);
    
    int map[s][v];
    int total = 0;
    
    for(int x = 0; x < s; x++){
        for(int y = 0; y < v; y++){
            
            map[x][y] = 0;   
        }
    }
    
    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        int counter = 0;
        int moved = 0;
        for(int x = 0; x < s; x++){
            for(int y = 0; y < v; y++){
                if(tmp == counter){
                    map[x][y] = 1;
                    for(int k = y; k < v; k++){
                        if(map[x][k] == 0){
                            moved++;
                        }
                    }
                }
                counter++;  
            }
        }
        
        total += moved;
    }
    
    printf("%d\n", total);
}
