#include <stdio.h>

int main() {
	
    int n, sum;
    scanf("%d", &n);
    while (n > 0){
        int remainder = n % 10;
        n = n / 10;
        
        sum += remainder;
    }
    printf("%d", sum);
    return 0;
}