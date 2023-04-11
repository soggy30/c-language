//카이사 시저 암호
#include <stdio.h>
int main() {
	
	char passwd[6] = {'v', 'n', 'w', 'm', 'r', '/0'};
	int key = 3; char planText[6];
	
	planText[0] = passwd[0] - key;
	planText[1] = passwd[1] - key;
 	planText[2] = passwd[2] - key;
	planText[3] = passwd[3] - key;
	planText[4] = passwd[4] - key;
	planText[5] = '\0';
	
 	
	printf("뜻은 %s\n", planText);
	
	return 0;
	
}