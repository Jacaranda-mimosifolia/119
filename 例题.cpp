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
		printf("大于");
	}
	else if(strcmp(a,b)==0)
	{
		printf("等于");
	}
	else if(strcmp(a,b)<0)
	{
		printf("小于");
	}
	return 0;
}
//strcmp是比较字符串中对应位置上的字符大小（ASCII码值大小）
//如果相同，就比较下一对，直到不同或者都遇到'\0'
