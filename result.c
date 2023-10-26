#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5, y = 7, z = 10;
    int a = 15, b = 20, c = 30;

    int result1 = ((x++) * (y--)) + ((++z) / 2);
    printf("x = %d, y = %d, z = %d, result1 = %d\n", x, y, z, result1);// the result is 40 because we used int and it can not put decimals

    x = 5;
    y = 7;
    z = 10;
    int result2 = ((++x) * (--y)) - ((z--) % 3);
    printf("x = %d, y = %d, z = %d, result2 = %d\n", x, y, z, result2);//the result is 35

    a = 15;
    b = 20;
    c = 30;
    int result3 = ((a-- * b) + (--c)) / 2;
    printf("a = %d, b = %d, c = %d, result3 = %d\n", a, b, c, result3);//the result is 164

    return 0;
}
