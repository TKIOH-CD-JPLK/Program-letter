#include <stdio.h>

int main(void)
{
    int price;
    scanf("%d",&price);
    int rate1 = (int)(price * 0.9),rate2 = (int)(price * 0.7),rate3 = (int)(price * 0.5),rate4 = (int)(price * 0.2);
    printf("1割引の値段:%d円\n3割引の値段:%d円\n5割引の値段:%d円\n8割引の値段:%d円\n",rate1,rate2,rate3,rate4);
    return 0;
}