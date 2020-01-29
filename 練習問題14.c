/*
名字と名前を別々に入力させて、
それを結合して表示するプログラムを作成せよ。
*/

#include <stdio.h>

int main(void)
{
    char sur[256],name[256],full[256];
    printf("あなたの苗字を入力してください。\n");
    scanf("%s",sur);
    printf("あなたの名前を入力してください。\n");
    scanf("%s",name);

    printf("あなたの氏名は%s %sです。\n",sur,name);

    return 0;
    
}