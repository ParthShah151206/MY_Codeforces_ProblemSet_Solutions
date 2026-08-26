#include<stdio.h>

int main(){
    int Y,W;
    scanf("%d %d", &Y,&W);
    
    int a = (Y>W)?Y:W;
    int b = 7 - a;
    if(b == 0){
        printf("0/1");
    }
    else if(b == 1){
        printf("1/6");
        }
         else if(b == 2){
        printf("1/3");
        }
         else if(b == 3){
        printf("1/2");
        }
         else if(b == 4){
        printf("2/3");
        }
         else if(b == 5){
        printf("5/6");
        }else{
        printf("1/1");
        }
   
    return 0;
}