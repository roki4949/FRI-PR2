#include <stdio.h>
#include <string.h>
int main(){
    int stMest = 10000;
    
    int a[stMest];
    int b[stMest];
    
    for(int i = 0; i < stMest; i++){
        a[i] = 0;
        b[i] = 0;
    }
    
    char tmp[stMest];
    
    scanf("%s", tmp);
    
    //printf("%s\n", tmp);
    
    int aLen = strlen(tmp);
    
    for(int i = 0; i < aLen; i++){
        a[i] = tmp[aLen-i-1] -'0';
    }
    
    /*for(int i = 0; i < aLen; i++){
        printf("%d\n",a[i]);
    }*/
    
    scanf("%s", tmp);
    
    //printf("%s\n", tmp);
    
    int bLen = strlen(tmp);
    
    for(int i = 0; i < bLen; i++){
        b[i] = tmp[bLen-i-1] -'0';
    }
    
    /*for(int i = 0; i < bLen; i++){
        printf("%d\n",b[i]);
    }*/
    
    for(int i = 0; i < bLen; i++){
        a[i] += b[i];
        if(a[i] > 9){
            a[i+1] += a[i] / 10;
            a[i] = a[i] % 10;
            
            if(i+1+1 > aLen){
                aLen = i+1+1;
            }
        }
    }
    
    for(int i = 0; i < aLen; i++){
        printf("%d",a[aLen-i-1]);
    }
    
    printf("\n");
}
