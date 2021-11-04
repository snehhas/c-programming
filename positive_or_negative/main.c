#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0){
       printf("Positive number %d",a);
    }
    else{
      printf("Negative number %d",a);
    };
    return 0;
}



