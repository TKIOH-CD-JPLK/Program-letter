/*
番号,名前,テストの平均点,\n,
1,野比のび太,0,\n,
2,源静香,90,\n,
3,剛田武,40,\n,
4,骨川スネ夫,70,\n
*/

/*
#include <stdio.h>

typedef struct 
{
    int number;
    char name[256];
    int score;

} People ;

void Input_People(People *data);
void Output_People(People data);

int main(void)
{
    int i;
    People data[5];

    FILE *fp;

    fp = fopen("test.csv","w");

    for ( i = 0; i < 5; i++)
    {
        Input_People(&data[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        Output_People(data[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        fprintf(fp,"%d%s%d",data[i].number,data[i].name,data[i].score);
    }
    fclose(fp);

    return 0;
}

void Input_People(People *data)
{
    printf("番号：");
    scanf("%d",&data->number);
    printf("名前：");
    scanf("%s",data->name);
    printf("平均点：");
    scanf("%d",&data->score);
    return;
}

void Output_People(People data)
{
    printf("%d,%s,%d,",data.number,data.name,data.score);
    printf("\n");
}
*/

#include <stdio.h>

int main(void)
{
	
	FILE *fp;
	
	fp = fopen("test.csv","w");
	
	fprintf(fp,"番号,名前,テストの平均点\n");
	fprintf(fp,"1,野比のび太,0\n");
	fprintf(fp,"2,源静香,90\n");
	fprintf(fp,"3,剛田武,40\n");
	fprintf(fp,"4,骨川スネ夫,70,\n");
	
	fclose(fp);
	
	return 0;
}