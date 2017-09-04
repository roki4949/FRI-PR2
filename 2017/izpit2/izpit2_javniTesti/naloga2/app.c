#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);
    
    int map[8][8];
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            map[i][j] = 0;
        }
    }
    
    int xPos = 7;
    int yPos = 7;
    map[yPos][xPos] = 1;
    
    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        
        //printf("%d\n", tmp);
        
        if(tmp == 0 && xPos - 1 >= 0){
            xPos--;
            map[yPos][xPos] = 1;
        } 
        
        if(tmp == 1 && yPos - 1 >= 0){
            yPos--;
            map[yPos][xPos] = 1;
        } 
        
        if(tmp == 2 && xPos + 1 < 8){
            xPos++;
            map[yPos][xPos] = 1;
        } 
        
        if(tmp == 3 && yPos + 1 < 8){
            yPos++;
            map[yPos][xPos] = 1;
        }
    }
    
    unsigned long long total = 0;
    int count = 63;
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            //printf("%d",map[i][j]);
            if(map[i][j] == 1){
                total += (long long) pow(2,count);
            } 
            count--;
        }
        //printf("\n");
    }
    
    printf("%llu\n", total);

    return 0;
}
