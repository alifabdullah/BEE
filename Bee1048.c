// #include<stdio.h>


// int main(){
//     float n, sl, sl2,sl3,sl4,sl5, i1, i2, i3, i4, i5;
//     scanf("%f",&n);
//     sl= n + n * 0.15;
//     sl2= n + n * 0.12;
//     sl3= n + n * 0.10;
//     sl4= n + n * 0.07;
//     sl5= n + n * 0.04;
//     i1 = sl - n;
//     i2 = sl2 - n;
//     i3 = sl3 - n;
//     i4 = sl4 - n;
//     i5 = sl5 - n;


//     if (n>=0 && n<=400.00)
//     {
//       printf("Novo salario: %.2f\n",sl);
//       printf("Reajuste ganho: %.2f\n",i1);
//       printf("Em percentual: 15 %%\n");
        
//     }
//     else if (n<=800.00)
//     {
//        printf("Novo salario: %.2f\n",sl2);
//       printf("Reajuste ganho: %.2f\n",i2);
//       printf("Em percentual: 12 %%\n");
//     }
//     else if (n<=1200)
//     {
//       printf("Novo salario: %.2f\n",sl3);
//       printf("Reajuste ganho: %.2f\n",i3);
//       printf("Em percentual: 10 %%\n");
//     }
//     else if (n<=2000.00)
//     {
//        printf("Novo salario: %.2f\n",sl4);
//       printf("Reajuste ganho: %.2f\n",i4);
//       printf("Em percentual: 7 %%\n");
//     }
//     else if (n>=2000.01)
//     {
//       printf("Novo salario: %.2f\n"),sl5;
//       printf("Reajuste ganho: %.2f\n",i5);
//       printf("Em percentual: 4 %%\n");
//     }
    
//     return 0;
    
// }
#include<stdio.h>

int main()
{
    float s;

    scanf("%f",&s);

    if(s>0 && s<=400.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(s+(s*.15)),(s*.15));
    else if(s<=800.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(s+(s*.12)),(s*.12));
    else if(s<=1200.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(s+(s*.10)),(s*.10));
    else if(s<=2000.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(s+(s*.07)),(s*.07));
    else
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(s+(s*.04)),(s*.04));
    return 0;
}