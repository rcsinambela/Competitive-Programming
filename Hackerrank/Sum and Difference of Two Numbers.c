#include <stdio.h>

int main(){
    int intNumber1, intNumber2;
    float floatNumber1, floatNumber2;

    scanf("%d %d", &intNumber1, &intNumber2);
    scanf("%f %f", &floatNumber1, &floatNumber2);

    printf("%d %d\n", intNumber1+intNumber2, intNumber1-intNumber2);
    printf("%.1f %.1f", floatNumber1+floatNumber2, floatNumber1-floatNumber2);
    return 0;
}