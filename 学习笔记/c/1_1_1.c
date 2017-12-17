#include <stdio.h>

int main()
{
	float fa,ce;
	int lo,hi,step;
	
	lo = 0;
	hi = 300;
	step = 20;
	
	fa = lo;
	printf("%3s %8s\n","华氏","摄氏");
	while(fa < hi){
		ce = (5.0/9)*(fa-32.0);
		printf("%3.0f %8.2f\n",fa,ce);
		fa = fa + step;
		}	
	return 0;
	}

/*
%o 表示八进制数字
%x 表示十六进制数
%c 表示字符
%% 表示%自身
*/