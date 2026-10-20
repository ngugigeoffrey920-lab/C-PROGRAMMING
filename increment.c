#include <stdio.h>
int main()
{
    int age;

    printf("Enter your current age value for 2026: ");
    scanf("%d",&age);

    printf("This is your age in 2027 next year = %d",++age);

    return 0;

}