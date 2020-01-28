#include <stdio.h>

int main(void)
{
    int score;
    
    do
    {
        printf("1~100の範囲で、テストの点数を入力してください：");
        scanf("%d",&score);

    } while (score < 0 || score > 100);

    printf("あなたの点数は%d点です。",score);
    
    return 0;
    
}