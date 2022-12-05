#include <stdio.h>

int main(){
    int a[3];
    for(int i = 0; i < 10; i++){
        a[i] = 11-i;
        printf("looped\n");
    }
    return 0;
}