#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("Select any number from 1-4: \n[1-apple]\n[2-grapes]\n[3-banana]\n[4-strawberry]\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("You have selected apple");
        break;
    case 2:
        printf("You have selected grapes");
        break;
    case 3:
        printf("You have selected banana");
        break;
    case 4:
        printf("You have selected strawberry");
        break;
    default:
        printf("Invalid entry");
    };
    return 0;

}
