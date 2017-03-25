#include <iostream>
int fun1(float a, float b){
    static int i=0; //т.к. i-статическая переменная, то строка static int i = 0; будет выполняться только один раз
    i++; //покажем сколько раз была запущена данная функция
    printf("x=%2.1f\n", a-b);
    return i;
}