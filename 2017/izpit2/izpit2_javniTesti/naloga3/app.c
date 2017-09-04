#include <stdio.h>
#include <stdlib.h>

char* theRightest(char* niz){
    char* zadnji = NULL;
    
    for(char* p = niz; *p != '\0'; p++){
        if(*p == '(' || *p == '{' || *p == '['){
            zadnji = p;
        }
    }
    return zadnji;
}

int match(char* niz){
    //printf("Call: %s\n", niz);
    char* p = theRightest(niz);
    char partner;
    
    if(*p == '('){
        partner = ')';
    } else if(*p == '{'){
        partner = '}';
    } else {
        partner = ']';
    }
    
    char* base = p;
       
    while(*p != '\0'){
        if(*p == partner){
            *base = ' ';
            *p = ' ';
            if(theRightest(niz)){
                return match(niz);
            } else {
                return 1;
            }
        }
        if(*p == ')' || *p == ']' || *p == '}'){
            if(*p != partner){
                return 0;
            }
        }
        p++;
    }
    
    return 0;
}

int main(){

    int n;
    scanf("%d", &n);
    
    char* tmp = malloc(1001 * sizeof(char));
    int total = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%s", tmp);
        //printf("New: %s\n", tmp);
        
        match(tmp);
        
        int primerno = 1;
        
        for(char* p = tmp; *p != '\0'; p++){
            if( *p == ')' || *p == '(' ||
                *p == '}' || *p == '{' ||
                *p == '[' || *p == ']'){
                primerno = 0;
            };
        }
        
        if(primerno){
            total++;
        }
        
        //printf("After: %s\n\n", tmp);
    }
    
    printf("%d\n", total);

}
