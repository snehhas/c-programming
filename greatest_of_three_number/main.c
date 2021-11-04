#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1<num2){
        if (num2<num3){
            printf("%d is greater",num3);
        }else{
            printf("%d is greater",num2);
        }
    }else{
        if (num1<num3){
            printf("%d is greater",num3);
        }else{
            printf("%d is greater",num1);
        }
    };
    return 0;
}
