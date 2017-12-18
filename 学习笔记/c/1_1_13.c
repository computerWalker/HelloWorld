#include <stdio.h>
#define LISTMAX 50

int main(){
	int list[LISTMAX];
	int c,i,t;
	int inword;
	i = inword = t = 0;
	
	while((c = getchar()) != EOF && i < LISTMAX){
		if(c == ' ' || c == '\n' || c == '\t'){
			if (inword == 1){
				list[i] = t;
				inword = 0;
				t = 0;
				++i;
			}
		}else{
			++t;
			inword = 1;
		}
	}
	for(int j = 0;j < i;j++){
		for(int k = 0;k< list[j];k++)
			printf("#");
		printf("\n");
	}
	return 0;
	}
	
/*
打印输入单词长度的直方图，水平方向
注意循环中，单行可以不加大括号，但是多行必须加大括号！！
安全起见应该所有的循环都加打括号！！！！
使用临时性的变量记录循环内部的数据，循环结束时候将值重置！
*/