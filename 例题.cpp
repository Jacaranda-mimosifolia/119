#include<stdio.h>
#include<string.h>
#define NUM 3
char a[NUM];
char b[NUM-1];
int main()
{
	for(int i=0;i<NUM;i++)
	{
		scanf("%s",a+i);
	}
	puts(a);
	for(int i=0;i<NUM-1;i++)
	{
		scanf("%s",b+i);
	}
	puts(b);
	
	if(strcmp(a,b)>0)
	{
		printf("����");
	}
	else if(strcmp(a,b)==0)
	{
		printf("����");
	}
	else if(strcmp(a,b)<0)
	{
		printf("С��");
	}
	return 0;
}
//strcmp�ǱȽ��ַ����ж�Ӧλ���ϵ��ַ���С��ASCII��ֵ��С��
//�����ͬ���ͱȽ���һ�ԣ�ֱ����ͬ���߶�����'\0'
