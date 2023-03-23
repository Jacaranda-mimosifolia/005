#include<stdio.h>
int main()
{
	char ch;
	for(;;)
	{
		printf("请输入一个字母:");
		scanf("%c",&ch);
		if ((ch>='A')&&(ch<='Z'))
			{printf("%c=%c\n",ch,ch+32);}
		else if ((ch>='a')&&(ch<='z'))
			{printf("%c=%c\n",ch,ch-32);}
		else if (ch=='0')
			{printf("循环结束");break;}
	}
	return 0;
}

