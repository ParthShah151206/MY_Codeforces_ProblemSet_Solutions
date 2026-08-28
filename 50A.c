#include<stdio.h>
#include<math.h>
int main(){
int M, N;
    scanf("%d %d", &M, &N);
    int floo = floor((M*N/2));
    printf("%d", floo);

    return 0;
}