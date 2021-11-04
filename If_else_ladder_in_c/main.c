#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&b,&c);
    printf("Select any number from 1-4: \n[1-addition]\n[2-substraction]\n[3-multiplication]\n[4-division]");
    scanf("%d",&a);

    if (a==1){
        result=b+c;
        printf("The sum is : %d",result);
    }
    else if (a==2){
        result=b-c;
        printf("The difference is : %d",result);
    }
    else if (a==3){
        result=b*c;
        printf("The product is : %d",result);
    }
    else if (a==4){
        result=b/c;
        printf("The quotient is : %f",result);
    }
    else{
        printf("You are a fool");
    };
    return 0;
}
