
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("The summation: %d\n",sum);

    avg = (float)sum/2; // type casting
    printf("The average: %.2f\n",avg);

}
