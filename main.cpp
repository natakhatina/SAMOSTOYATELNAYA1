#include <iostream>
#include "head1.h"

int main() {
    float a;
    float b;
    printf ("введите энергию связи ядра с бОльшим массовым числом:");
    scanf("%f",&a);
    printf ("\nвведите энергию связи ядра с меньшим массовым числом:");
    scanf("%f",&b);
    int i=fun1(a,b);
    printf ("i=%d",i);
    return 0;
}
