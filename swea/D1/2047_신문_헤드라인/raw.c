#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char headline[81] = "";
    int n;
    
    fgets(headline, 81, stdin);
    n = strlen(headline);
    
    for(int i = 0 ; i < n ; i++){
        if(islower(headline[i])) headline[i] = toupper(headline[i]);
    }
    puts(headline);
    
    return 0;
}
