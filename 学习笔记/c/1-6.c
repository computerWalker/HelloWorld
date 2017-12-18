#include <stdio.h>
int main(){
	int c;
	int numbers[10];
	int white,others;
	
	for(int i = 0;i < 10;i++)
		numbers[i] = 0;
	
	white = others = 0;
	
	while((c = getchar()) != EOF){
		if (c >= '0' && c <= '9')
			++numbers[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t' )
			++white;
		else
			++others;
		}
	printf("number is :\n");
	for (int i = 0;i < 10;i++)
		printf("%d have %d times.\n",i,numbers[i]);
	printf("white have %d times.\n",white);
	printf("others char have %d times.\n",others);
	return 0;
	}
	
	/*
	用来统计输入中有多少数字、空白、其他字符
	定义数组的方法
	cahr是小整数，字符‘0’-‘9’对应整数0-9
	数组元素使用：调用和赋值
	*/