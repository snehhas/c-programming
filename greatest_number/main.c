#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if (a<b){
        printf("%d is greater",b);
    }else{
    printf("%d is greater",a);
    }
}
