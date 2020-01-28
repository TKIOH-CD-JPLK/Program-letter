#include <stdio.h>

int check(int);

int main(void)
{
    int month;
    printf("月を入力してください：");
    scanf("%d",&month);

    check(month);

    return 0;

}

int check(int month)
{
    switch (month)
    {
    case 1:
        printf("%d月は、陰暦では「睦月」です。",month);
        break;
    case 2:
        printf("%d月は、陰暦では「如月」です。",month);
        break;
    case 3:
        printf("%d月は、陰暦では「弥生」です。",month);
        break;
    case 4:
        printf("%d月は、陰暦では「卯月」です。",month);
        break;
    case 5:
        printf("%d月は、陰暦では「皐月」です。",month);
        break;
    case 6:
        printf("%d月は、陰暦では「水無月」です。",month);
        break;
    case 7:
        printf("%d月は、陰暦では「文月」です。",month);
        break;
    case 8:
        printf("%d月は、陰暦では「葉月」です。",month);
        break;
    case 9:
        printf("%d月は、陰暦では「長月」です。",month);
        break;
    case 10:
        printf("%d月は、陰暦では「神無月」です。",month);
        break;
    case 11:
        printf("%d月は、陰暦では「霜月」です。",month);
        break;
    case 12:
        printf("%d月は、陰暦では「師走」です。",month);
        break;
    
    default:
        printf("1~12の間の数値を入力してください。");
        scanf("%d",&month);
        check(month);
        break;
    }

    return 0;
}