#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char  short  int(long)  long long 

int func(int a){
    return a + 1;
}

int main(){

    int (*funcptr)(int) = func;

    int a = funcptr(10);
    
    printf("Out: %d\n",a);
    return 0;
}