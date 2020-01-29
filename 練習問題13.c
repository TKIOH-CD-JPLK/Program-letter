#include <stdio.h>

int main(void)
{
    int data[10];
    int i;
    
    for ( i = 0; i < 10; i++)
    {
    printf("%d番目の数値を入力してください。",i);
    scanf("%d",&data[i]);
    }

    printf("入力されたデータを逆から表示します。\n");

    for ( i = 0; i < 10; i++)
    {
    printf("%d\n",data[9-i]);
    }

    return 0;
}