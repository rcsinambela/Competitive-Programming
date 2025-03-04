#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s, *duplicateSentence;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    duplicateSentence = s;

    for (int i = 0; i < strlen(s); i++){
        if (duplicateSentence[i] == ' '){
            printf("\n");
            continue;
        }
        printf("%c", duplicateSentence[i]);
    }
    printf("\n");
    return 0;
}