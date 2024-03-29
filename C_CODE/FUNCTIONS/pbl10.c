#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;

    /* Input all three angles of triangle */
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    /* Calculate sum of angles */
    sum = angle1 + angle2 + angle3; 

    /*
     * If sum of angles is 180 and
     * angle1, angle2, angle3 is not 0 then
     * triangle is valid.
     */
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}