#include<stdio.h>
#include<stdlib.h>

// pretty sure this is genuinely impossible to follow without a debugger
void func1(){
    printf("Foo\n");
}

void func2(){
    for(int i = 0; i < 10; i++){
        printf("%i\n", i);
    }
    char a[1];
    a[16] = 0;
    a[15] = '@';
    a[14] = 17;
    a[13] = '6';
}

void func3(){
    long int a[1];
    a[2] = 4198727;
}

int main(){
    func3();
    return 0;
}