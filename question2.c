#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    if (a>b){
        printf("%d is greater", a);
    }
    else if(b>a){
        printf("%d is greater", b);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}