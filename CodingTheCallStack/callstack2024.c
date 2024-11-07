#include <stdio.h>
#include <stdlib.h>


void hello() {
    char str1[] = "hiya";
    printf("char string[] (call stack- lifetime: function end) location: %p\n", &str1);
}

static int x;
int y;

int next(int i) {
    int inc = 1;
    printf("inc (call stack- lifetime: function end) location: %p\n", &inc);
    static int j = 2;
    printf("j (static- lifetime: program end) location: %p\n", &j);
    printf("i (call stack - lifetime: program end) location: %p\n", &i);

    return i + inc + j;
}

int main() {
    float* arr = malloc(3 * sizeof(float));
    printf("arr (prgram heap- lifetime: program end) location: %p\n", &arr);
    printf("x (static-lifetime: program end) location: %p\n", &x);
    printf("y (code -lifetime: function end) location: %p\n", &y);
    printf("hello function (code - lifetime: program end) %p\n", (void(*)(void)) hello);
    printf("next function (code -lifetime: program end) %p\n", (void(*)(void)) next);

    hello();
    next(3);
    return 0;
}
