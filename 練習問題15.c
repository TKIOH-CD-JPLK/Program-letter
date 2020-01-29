/*
0～100の範囲で入力された複数の数値の中から、
最大値と最小値を求めて表示するプログラムを作成せよ。
-1が入力された場合は入力の終わりと判定する。
ただし、最大値と最小値はmain関数以外の一つの関数の中で求める。
また、入力された数値を記憶する配列の要素数は10とし、
それ以上入力された場合はエラーが起きても仕方ないこととする。
ヒント:配列の中に -1 があればデータの終わりだと判断できる。
ヒント:最小値を探すには、最大値を記憶した変数との比較を繰り返せば良い。
*/

#include <stdio.h>

int check(int);

int main(void)
{
    int i,j;
    char number[10];

    for ( i = 0; i < 10; i++)
    {
    printf("0~100の範囲で数値を入力してください。");
    scanf("%s",&number[i]);
    }

    check(max);

    printf("%d\n",check);

    return 0;

}

int check(int max)
{
    int a,b;
    int min,max;

    for ( a = 0; a < 10; a++)
    {
        for ( b = 1; b < 10; b++)
        {
            if(number[a] > number[b])
            {
                max = (int)(number[a]);
            }else
            {
                max = (int)(number[b]);
            }
            
        }
    }
    
    printf("最大値は%dになります。\n",max);

    return max;
}