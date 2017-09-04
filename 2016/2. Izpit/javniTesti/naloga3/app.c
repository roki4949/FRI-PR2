#include <stdio.h>
#include <math.h>

int node(int* map,int index, int globina, int depth){
    
    printf("%d", map[index]);
    
    if(globina < depth){
        node(map, 2*index+1,globina+1, depth);
        node(map, 2*index+2,globina+1, depth);
    } 
    
    return 1;
    
}

int main(){

    int n;
    scanf("%d", &n);
    
    int qNodes;
    
    qNodes = pow(2,n)-1;

    int map[qNodes];
    
    for(int i = 0; i < qNodes; i++){
        scanf("%d", &map[i]);
    }
    
    node(map,0, 1, n);
    printf("\n");
    
    return 0;
}
