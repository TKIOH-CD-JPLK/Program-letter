#include <stdio.h>

int check(int);

int main(void)
{
    int year;
    printf("西暦年を入力してください：");
    scanf("%d",&year);

    check(year);

    return 0;
}

int check(int year)
{
    if(year % 4 == 0){
        printf("%d年は夏季オリンピックが開催されました。\n",year);
    }else if(year % 2 == 0){
        printf("%d年は冬季オリンピックが開催されました。\n",year);
    }else{
        printf("%d年はオリンピックが開催されていません。\n",year);
    }
    return 0;
}