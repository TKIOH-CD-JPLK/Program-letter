#include <stdio.h>

int main(void)
{
    int year;
    printf("西暦年を入力してください：");
    scanf("%d",&year);

    if (year % 4 == 0)
    {
        printf("%d年は夏季五輪が開催された。\n",year);
    }else if (year % 2 == 0){
        printf("%d年は冬季五輪が開催された。\n",year);
    }else{
        printf("%d年は五輪が開催されていない。\n",year);
    }
    
    return 0;
}