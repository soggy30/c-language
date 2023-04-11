#include <stdio.h>
int main() {

    float num1 = 21; //변수선언 및 초기화
	float num2 = 33;
	float sum = 0, sub = 0, mul = 0, div = 0;

	sum = num1 + num2; sub = num1 - num2;
	mul = num1 * num2; div = num1 / num2;
	printf("%.1f / %.1f = %.2f \n", num1, num2, sum);
	printf("%.1f / %.1f = %.2f \n", num1, num2, sub);
	printf("%.1f / %.1f = %.2f \n", num1, num2, mul);
	printf("%.1f / %.1f = %.2f \n", num1, num2, div);
	return 0;
}