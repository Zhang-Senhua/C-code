#include <stdio.h>
int main()
{

    int SUM = 0;
    int n = 1;
    int sum = 1;
    int num1;
    printf("请输入你要计算的阶乘数n:例如1!+2!+3!+...+n!\n");
    scanf("%d", &num1);
    for (int num2 = 1; num2 <= num1; num2++)
    {
        // int sum = 1;
        // for (int n = 1; n <= num2; n++)
        // {
        //     sum = sum * n;
        // }
        sum = sum * num2;

        SUM = sum + SUM;
    }

    printf("%d", SUM);
    return 0;
}