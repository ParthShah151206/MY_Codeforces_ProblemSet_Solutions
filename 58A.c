#include<stdio.h>

int main(){
    char str[100];
        char order[] = "hello";

    scanf("%s", str);

    int i = 0, j = 0;

    while (str[i] != '\0' && order[j] != '\0') {
        if (str[i] == order[j]) {
            j++;
        }
        i++;
    }

    if (order[j] == '\0') {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}