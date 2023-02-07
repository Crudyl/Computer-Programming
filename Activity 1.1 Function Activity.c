#include <stdio.h>
float avgnumber(float num1, float num2, float num3, float num4, float num5); // function prototype
int addnumber(int num1, int num2, int num3, int num4, int num5);

int main()
{
    int n1,n2,n3,n4,n5,sum;
    float average;

    printf("Enters five numbers:\n");
    scanf("%d %d %d %d %d" ,&n1,&n2,&n3,&n4,&n5);

    sum = addnumber(n1,n2,n3,n4,n5);                                          // function call
    printf("\nSum = %d", sum);

    average = avgnumber(n1, n2, n3, n4, n5);
    printf("\nAverage = %.01f", average);

    return 0;
}
int addnumber(int num1, int num2, int num3, int num4, int num5)                // function definition
{
    int result;
    result = num1+num2+num3+num4+num5 ;
    return result;
}
float avgnumber(float num1, float num2, float num3, float num4, float num5)
{
    float result;
    result = (num1 + num2 + num3 + num4 + num5)/5;
    return result;                                                             // return statement
}
