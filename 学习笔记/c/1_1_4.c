#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
	float fa,ce;
	
	for(fa = UPPER;fa >= LOWER;fa -= STEP){
		ce = (5.0/9.0)*(fa - 32);
		printf("%3.0f %6.2f\n",fa,ce);
	}
	return 0;
	}
/*
使用for循环还是while循环主要看具体情形那种循环更为清晰

#define 定义字符常量，主要意义在于给不易理解的数以意义
#define 通常使用全部大写的名称
#define 句尾没有分号
*/