#include <stdio.h>

typedef struct 
{
    char name[16][256];
    int age[16];
    int sex[16];
} per_info;

void per_info_print(per_info *data);

int main(void)
{
    per_info data;

    for ( i = 0; i < 3; i++)
    {
        printf("名前を入力してください：");
        scanf("%s\n",per_info->name[i]);
        printf("年齢を入力してください：");
        scanf("%d\n",per_info->age[i]);
        printf("性別（1:男性、2:女性）を入力してください：");
        scanf("%d\n",per_info->age[i]);

    }

    per_info_print(&data);    

    return 0;
}

void per_info_print(per_info *data)
{
    for ( i = 0; i < 3; i++)
    {
        printf("%s\n",per_info->name[i]);
        printf("%d\n",per_info->age[i]);
        printf("%d\n",per_info->sex[i]);
    }
    return;
}