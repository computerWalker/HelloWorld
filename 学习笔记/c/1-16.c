/*
打印长度超过80的行
取输入时判断长度是否超过80，并将该行的字符+‘\0’记录下来
将搜集到的行传入一个字符组打印出来
*/
#include <stdio.h>
#define MAXLINE 100                             //最大行数
#define MAXLETTER 2000                          //所有字符总数最大值

int getlines(char line[]);                      //预先定义一个函数，申明函数，结束用；符号
void copyline(char to[],char from[],int start); //定义copy函数，传入开始索引值
int main(){
	char line[MAXLINE];
	char resout[MAXLETTER];                       //存放所有符合条件字符
	int len;																			//记录当前行长度
	int allchar;                                  //用来记录当前添加字符总组的索引值
	allchar = 0;                                  //初始化
	while((len = getlines(line)) > 0){            //当行数没有结束时
		if (len > 15){															//如果单行字符数超过**
			copyline(resout,line,allchar);            //将当前行添加到总字符组当中
			allchar += len;                           //记录下一次开始时候的索引
			}		
		}
	printf("%s",resout);
	return 0;
	} 

int getlines(char line[]){
	int i,c;
	//在限制行数内，结束符号前，并且不是换行符号时候
	for(i = 0;i < (MAXLINE - 1) && (c = getchar()) != EOF && c != '\n';i++)
		line[i] = c;
	if (c == '\n'){
		line[i] = c;                              //当检测到换行符时候字符应该是‘内容’+'\n'+'\0'（系统规定）
		++i;
		}
	line[i] = '\0';
	return i;
	}

void copyline(char to[],char from[],int start){
	int i;
	i = 0;
	while ((to[start] = from[i]) != '\0'){
		++start;
		++i;
	}
	}