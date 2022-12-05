#include <stdio.h>
#include <string.h>
#include <unistd.h>

// this manually allocates a char buffer of size 200 and sets p_str to point to it, it also sets the string_length variable to 200.
// then it puts 200 bytes into the buffer and prints out the length and the string to prove nothing has been corrupted.
// These lengths can be changed and using formatted inline asm you could probably use this for runtime stack buffer allocation.
int main(){
    char* p_str;
    int string_length = 5;
    asm ("sub $200, %rsp");
    asm ("mov %rsp, %rax");
    asm ("mov %rax, -0x10(%rbp)");
    asm ("movl $200, -0x4(%rbp)");
    strcpy(p_str, "ABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijlmnopqrtuvwxyzABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijlmnopqrtuvwxyzABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijlmnopqrtuvwxyzABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijlmnopqrtuvwxyz\0");
    printf("%i\n", string_length);
    printf("%s\n", p_str);
}

