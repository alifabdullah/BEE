#include <stdio.h>
#include<math.h>
 
int main() {
 
     double A, B, C, D;

     scanf("%lf%lf ", &A, &C);

     scanf("%lf%lf", &B, &D);

     double distance = sqrt((B - A)*(B - A) + (D - C)*(D - C));

     printf("%.4lf\n", distance );
   
    return 0;
}