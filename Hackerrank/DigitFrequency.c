#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s, *duplicateSentence;
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);

    duplicateSentence = s;

    for (int i = 0; i < strlen(s); i++) {
        if (duplicateSentence[i] == '0'){
            zero++;
        } else if (duplicateSentence[i] == '1'){
            one++;
        } else if (duplicateSentence[i] == '2'){
            two++;
        } else if (duplicateSentence[i] == '3'){
            three++;
        } else if (duplicateSentence[i] == '4'){
            four++;
        } else if (duplicateSentence[i] == '5'){
            five++;
        } else if (duplicateSentence[i] == '6'){
            six++;
        } else if (duplicateSentence[i] == '7'){
            seven++;
        } else if (duplicateSentence[i] == '8'){
            eight++;
        } else if (duplicateSentence[i] == '9'){
            nine++;
        }
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
    return 0;
}
