//strcmp 比较两个字符 
//int strcmp(const char* str1,const char* str2)

//第一个字符串大于第二个字符串，则返回大于0的数字 
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字 

//一般大家都会对strcmp函数产生误区，以为strcmp是比较两个字符串的长度，其实不是的！
//strcmp是比较字符串中对应位置上的字符大小（ASCII码值大小）
//如果相同，就比较下一对，直到不同或者都遇到'\0'

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
