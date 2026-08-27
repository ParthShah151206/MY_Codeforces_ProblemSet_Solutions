#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int count = 0;
    
    for(int i = 2;i<=n;i++){
        int count1 = 0;
        for(int j = 2;j<i;j++){
            if(i%j == 0){
                int flag =1;

                for(int k = 2;k<j;k++){
                    if(j%k == 0){
                        flag = 0;
                        break;
                    }
                }
                if(flag){
                    count1++;
                }
            }
            
            }
            if(count1 == 2){
                count++;
        }
    }printf("%d", count);
    return 0;
}