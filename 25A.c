#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    if(n == 3){
         if(arr[0] == arr[1]){
            printf("3");
         }
         else if(arr[1] == arr[2]){
            printf("1");
         }else{
            printf("2");
         }   
        }else{
             int diff1 = arr[1] - arr[0];
             int diff2 = arr[2] - arr[1];
             int diff3;
             
             if (diff1 == diff2){
                diff3 = diff1;
             }else{
                diff3 = arr[3] - arr[2];
             }
               if(arr[1] - arr[0] != diff3){
                printf("%d", 1);
                 return 0;
               }
    
            for(int i = 0; i < n - 1; i++){
                if(arr[i+1] - arr[i] != diff3){
                   printf("%d", i+2);
                   break;
        }
    }
}        
    return 0;
}