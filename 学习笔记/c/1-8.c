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