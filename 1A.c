#include<stdio.h>

int main(){
    long long n, m, a;
    printf("Enter n");
    scanf("%lld", &n);
     printf("Enter m");
    scanf("%lld", &m);
     printf("Enter a");
    scanf("%lld", &a);

    long long nceil = ((n+a-1)/a);
    long long mceil = ((m+a-1)/a);

    printf("Total no. of tiles is:%lld", nceil*mceil); 
    return 0;
}