#include <stdio.h>
int main() {

    int num1 = 14; //변수선언 및 초기화
	int num2 = 3;
	int num3 = 10;
	int num4 = 2;
	int sum =0; //초기화
	
	sum = num1 * num2 - num3 + num2 / num4;
	printf("%d * %d - %d + %d / %d = %d \n", num1, num2, sum);
	
	return 0;
}