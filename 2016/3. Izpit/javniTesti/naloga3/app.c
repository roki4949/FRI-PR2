#include <stdio.h>

int count = 0;
int n, a, b;

int jump(int* map, int d, int globina){
    
    //printf("Call: jump(map, %d, %d)\n", d, globina);
    
    map[d] = -1;
    
    for(int i = a; i <= b; i++){
        if(d-i > -1 && d-i < n && map[d-i] == 0){
            jump(map, d-i, globina+1);
        }
        if(d+i > -1 && d+i < n && map[d+i] == 0){
            jump(map, d+i, globina+1);
        }
    }
    
    
    
    int add = 1;
    
    for(int i = 0; i < n; i++){
        if(map[i] == 0){
            add = 0;
        }
    }
    
    count += add;
    
    map[d] = 0;
        
    return 0;
}

int main(){

    scanf("%d %d %d", &n, &a, &b);
    
    int map[n-1];
    
    for(int i = 0; i < n; i++){
        map[i] = 0;
    }
    
    map[0] = -1;

    jump(map, 0, 0);
    
    
    printf("%d\n", count);
    
    return 0;
}
