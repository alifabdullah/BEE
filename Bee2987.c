#include <stdio.h>

int main() {
    char letter;
    int position;

   
    scanf("%c", &letter);

    if ('A' <= letter && letter <= 'Z') {
        position = letter - 'A' + 1;
        printf("%d\n",position);
   
    }

    return 0;
}
