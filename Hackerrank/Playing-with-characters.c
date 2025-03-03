// TODO

//! First, take a character, ch as input.
//! Then take the string, s as input.
//! Lastly, take the sentence scn as input.

#include <stdio.h>

int main(){
    char ch, s[100], scn[100];

    scanf("%c", &ch);
    scanf("%s\n", &s);
    scanf("%[^\n]%*", &scn);
    printf("%c\n%s\n%s", ch, s, scn);
    return 0;
}