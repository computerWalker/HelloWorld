#include <stdio.h>
int main(){
	int c,n;
	n = 'a';
	while((c = getchar()) != EOF){
			if (c != ' ')
				putchar(c);
			if (c == ' ')
				if (n != ' ')
					putchar(' ');
			n = c;
		
		}
	
	return 0;
	}
/*
使用一个变量一直记录当前输入的值

*/