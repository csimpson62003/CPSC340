#include <stdio.h>
#include <stdlib.h>


void hello() {
    char str1[] = "hiya";
    printf("char string[] (call stack) location: %p\n", &str1);
}

static int x;
int y;

int next(int i) {
    int inc = 1;
    printf("inc (call stack) location: %p\n", &inc);
    static int j = 2;
    printf("j (static) location: %p\n", &j);
    printf("i location: %p\n", &i);

    return i + inc + j;
}

int main() {
    float* arr = malloc(3 * sizeof(float));
    printf("arr (prgram heap) location: %p\n", &arr);
    printf("x (static) location: %p\n", &x);
    printf("y (code) location: %p\n", &y);
    printf("hello function (code) %p\n", (void(*)(void)) hello);
    printf("next function (code) %p\n", (void(*)(void)) next);

    hello();
    next(3);
    return 0;
}
