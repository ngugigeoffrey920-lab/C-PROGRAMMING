#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age;
    float height;

    printf("What's your age: ");
    scanf("%d",&age);

    printf("What about your height: ");
    scanf("%f",&height);

    bool result= (age>=18)&&(height>=6.5);

    
    if (result==true)
    {
        printf("COMMENT: YOU CAN PLAY THE VOLLEYBALL GAME");
    }
    else 
    {
        printf("COMMENT: SORRY NOT TODAY");
    }

    return 0;
}
