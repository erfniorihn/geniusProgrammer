#include <stdio.h>
#include "box.c"
#include "Diamond.c"
#include "lib/myHeader.h"

int main(){
    int matrix;
    intInput ("Enter the size of square: ", "%d", &matrix);
    scanf ("%d" , &matrix);

    box(matrix);
    int c = add(5,6);
    printf("\n%d", c);

    diamond();
    return 0;
}