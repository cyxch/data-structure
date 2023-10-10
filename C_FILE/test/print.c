#include<stdio.h>

void PrintN(int N);
void PrintN_1(int N);

int main()
{
    int N;
    scanf("%d", &N);
    PrintN(N);
    PrintN_1(N);

    return 0;
}

void PrintN(int N)
{
    /* 打印从1到N的全部正整数 */
    int i;
    for(i = 1; i <= N; i++)
    {
        printf("%d \n", i);
    }

    return;
}

void PrintN_1(int N)
{
    if(N > 0)
    {
        PrintN_1(N - 1);
        printf("%d \n", N);
    }

    return;
}