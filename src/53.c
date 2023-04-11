#include <stdio.h>
int main() {
	
	float weight = 0, height = 0, bmi = 0;
	printf("몸무게를 입력(kg) : ");
	scanf("%f", &weight);
	printf("신장을입력(cm) : ");
	scanf("%f", &height);
	height = height * 0.01;// cm -> m 변환
	bmi = weight / (height * height);
	printf("당신의 bmi는 %.2f\n", bmi);
	
	return 0;
}