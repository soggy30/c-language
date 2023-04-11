#include <stdio.h>

int main() {
	
	char name[10];
	int age = 0;
	char star[7];
	
	printf("이름을 입력 : "); scanf("%s", name);
	printf("나이를 입력 : "); scanf("%d", &age);
	printf("성별를 입력 : "); scanf("%s", star);
	printf("%s\n", name); 
	printf("%d\n", age);
	printf("%s\n", star);
	
	return 0;
}