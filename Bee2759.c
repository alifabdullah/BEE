// #include <stdio.h>

// int main(void)
// {
//     char a, b, c;
    
//     for(int i = 0; i <= 2; i++){
//         scanf("%c%c%c",&a, &b, &c);
//         printf("A = %c, B = %c, C = %c\n", a, b, c);
//         printf("A = %c, B = %c, C = %c\n", b, c, a);
//         printf("A = %c, B = %c, C = %c\n", c, a, b);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    char varA, varB, varC;
    scanf(" %c", &varA);
    scanf(" %c", &varB);
    scanf(" %c", &varC);

    
    printf("A = %c, B = %c, C = %c\n", varA, varB, varC);

    printf("A = %c, B = %c, C = %c\n", varB, varC, varA);
    
    printf("A = %c, B = %c, C = %c\n", varC, varA, varB);

    return 0;
}
