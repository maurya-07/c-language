// WAP to print alphabets from A to Z

#include <stdio.h>
int main() {
    char ch;
    for(ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");
    return 0;
}