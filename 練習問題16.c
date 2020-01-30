#include <stdio.h>

typedef struct 
{
    char name[256];
    int age;
    int sex;
} per_info;

void per_info_print(per_info *data);

int main(void)
{
    per_info data[];
    int i;

    for ( i = 0; i < 3; i++)
    {
        printf("名前を入力してください：");
        scanf("%s\n",data[i].name[256]);
        printf("年齢を入力してください：");
        scanf("%d\n",&data[i].age);
        printf("性別（1:男性、2:女性）を入力してください：");
        scanf("%d\n",&data[i].sex);

    }

    per_info_print(&data);    

    return 0;
}

void per_info_print(per_info *data)
{
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("%s\n",data[i]->name[256]);
        printf("%d\n",data[i]->age);
        printf("%d\n",data[i]->sex);
    }
    return;
}