#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    return (a > b && a > c && a > d)? a : (b > c && b > d)? b : (c > d)? c : d;
}
int main(){
    int a, b, c,d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int greatest = max_of_four(a, b, c, d);
    printf("%d", greatest);
    return 0;
}