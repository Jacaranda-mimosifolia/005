#include<stdio.h>
int main()
{
	char ch;
	for(;;)
	{
		printf("������һ����ĸ:");
		scanf("%c",&ch);
		if ((ch>='A')&&(ch<='Z'))
			{printf("%c=%c\n",ch,ch+32);}
		else if ((ch>='a')&&(ch<='z'))
			{printf("%c=%c\n",ch,ch-32);}
		else if (ch=='0')
			{printf("ѭ������");break;}
	}
	return 0;
}

