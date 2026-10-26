#include <stdio.h>

int x = 10;
int *p = &x;

/*
no-op: no operation function, noop: no operation
*/

/*
    global scope
    4 block level scopes
    function
    condition
    loop
    nested {}
*/

int main(){
    printf("%d\n", x); // 10
    printf("%d\n", &x); //adress of x
    printf("%d\n", p); // address of x
    printf("%d\n", *p); // 10
}

