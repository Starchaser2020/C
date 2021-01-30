#include <stdio.h>

void main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = -17;
    upper = 150;
    step = 20;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * 9 / 5 + 32;
        printf("%3.0f %6.1f\n",celsius, fahr);
        celsius = celsius + step;
    }
    
}