#include<stdio.h>

int main()
{
 long long int a, b, sum=0;
 
 scanf("%lld %lld", &a, &b);
 
 for (int i = a; i<= b; i++)
 {
 sum = sum + i;
 }
 printf("%lld\n",sum);
 
 return 0;
}