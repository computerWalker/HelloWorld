#include <stdio.h>

int main(){
	
	int c,s,t,e;//char,space,stble,enter
	s = t = e = 0;
	while((c = getchar()) != EOF){
		if (c == ' ')
			++s;
		if (c == '	')
			++t;
		if(c == '\n')
			++e;
		}
	printf("space : %d times\ntable : %d times\nenter : %d times\n",s,t,e);
	return 0;
	}
/*
单引号表示字符常量 ‘A’ = 65,字符在ASCII中对应的值
双引号表示一个字符串常量
*/