#include <stdio.h>
int main () {
	
	char name[21];
	int age;
	char code;
	double secure;
	
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("부서코드를 입력하세요 : ");
	scanf(" %c", &code);
	printf("보안키를 입력하세요 : ");
	scanf("%f", &secure);
    
	printf("\n**************************\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("부서코드 : %c\n", code);
	printf("보안키 : %f\n", secure);
	printf("**************************\n");
	
	return 0;
}