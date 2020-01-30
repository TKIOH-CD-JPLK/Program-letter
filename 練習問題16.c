/*
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[256];
    int age;
    int sex;
}per_info;

void Input_per_info(per_info *date);
void Output_per_info(per_info date);

int main(void)
{
    per_info[3];
    int i;

    for ( i = 0; i < 3; i++)
    {
        Input_per_info(&data[i]);
    }

    for ( i = 0; i < 3; i++)
    {
        Output_per_info(data[i]);
    }

    return 0;
}

void Input_per_info(per_info *data)
{
    pdata = &data;

    printf("名前：");
    scanf("%s",data->name);
    printf("年齢：");
    scanf("%d",pdata->age);
    printf("性別（1-男性、2-女性）：");
    scanf("%d",pdata->sex);
    printf("\n");

}

void Output_per_info(per_info data)
{
    char sex[16];

    printf("名前：%s,\n",data.name);
    printf("年齢：%d,\n",data.age);

    if (data.sex == 1)
    {
        strcpy(sex,"男性");
    }else{
        strcpy(sex,"女性");
    }
    
    printf("性別：%s\n",sex);
    
}
*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[256];
	int age;
	int sex;
} People;

void InputPeople(People *data);
void ShowPeople(People data);

int main(void)
{
	People data[3];
	int i;
	
	for (i = 0;i < 3;i++) {
		InputPeople(&data[i]);
	}
	
	for (i = 0;i < 3;i++) {
		ShowPeople(data[i]);
	}
	
	return 0;
}

void InputPeople(People *data)
{
	printf("名前:");
	scanf("%s",data->name);
	printf("年齢:");
	scanf("%d",&data->age);
	printf("性別(1-男性、2-女性):");
	scanf("%d",&data->sex);
	printf("\n");
}

void ShowPeople(People data)
{
	char sex[16];
	
	printf("名前:%s\n",data.name);
	printf("年齢:%d\n",data.age);
	
	if (data.sex == 1) {
		strcpy(sex,"男性");
	} else {
		strcpy(sex,"女性");
	}
	
	printf("性別:%s\n",sex);
	printf("\n");
}