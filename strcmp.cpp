//strcmp �Ƚ������ַ� 
//int strcmp(const char* str1,const char* str2)

//��һ���ַ������ڵڶ����ַ������򷵻ش���0������ 
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������ 

//һ���Ҷ����strcmp����������������Ϊstrcmp�ǱȽ������ַ����ĳ��ȣ���ʵ���ǵģ�
//strcmp�ǱȽ��ַ����ж�Ӧλ���ϵ��ַ���С��ASCII��ֵ��С��
//�����ͬ���ͱȽ���һ�ԣ�ֱ����ͬ���߶�����'\0'

#include<stdio.h>
#include<string.h>
char a[]="abcde";
char b[]="abfde";
char c[]="abade";
char d[]="abcde";
int main()
{
	printf("%d,%d,%d",strcmp(a,b),strcmp(a,c),strcmp(a,d));
	return 0;
}
