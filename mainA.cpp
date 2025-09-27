#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double j,t;
    double v;
    scanf("%lf", &j);
    scanf("%lf", &t);
    
    v = (j/t);
    
    printf("%.3lf", v);
    return 0;
}