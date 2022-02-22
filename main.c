#include <stdio.h>
#include <stdlib.h>

main()
{
    float s1;
    int count, per;

    printf("Enter number of products sold\n");
    scanf("%f", & s1);
    count = 90;

        per = count - s1;

    printf("Quantity remaining is %d\n",per);

}
