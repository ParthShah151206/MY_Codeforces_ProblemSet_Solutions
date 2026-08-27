#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char team[10];

    char team1[50];
    char team2[50];
    int team3 = 0;
    int team4 = 0;

    
    for(int i = 0;i<n;i++){
        scanf("%s", team); 

       if(i == 0){
        strcpy(team1,team);
        team3++;
       }else if(strcmp(team,team1) == 0){
        team3++;
       }else{
        strcpy(team2,team);
        team4++;
       }
    }
    
    if(team3>team4)
    printf("%s", team1);
    else
    printf("%d", team2);
    return 0;
}