#include <stdio.h>

int main(){

    int line[10];
    
    for(int i = 0; i < 10; i++){
        line[i] = 0;
    }

    char tmp;

    while(scanf("%c", &tmp) != EOF){
        if(tmp - '0' >= 0 && tmp - '0' <= '9'){
            line[tmp-'0'] = 1;
        }
    }
    
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        if(line[i]) count++;
    }
    
    printf("%d\n", count);
    

    return 0;
}
