#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };
  	// Complete the code.
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9){
            printf("%s\n", words[n - 1]);
        } else if (n % 2 == 0){
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}

