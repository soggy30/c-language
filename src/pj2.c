#include <stdio.h>
#include <stdlib.h>


int main () {
	
	system("clear");
	float rate_1, rate_2, score_1, score_2;;
    float p_e_r, p_e, result; 
	
	printf("*** 과목별 점수 계산 프로그램 ***\n");
	printf("중간고사 반열 비율/받은 점수를 입력하세요 : ");
	scanf("%f %f", &rate_1, &score_1);
	printf("기말고사 반열 비율/받은 점수를 입력하세요 : ");
	scanf("%f %f", &rate_2, &score_2);
	printf("수행평가 반열 비율/받은 점수를 입력하세요 : ");
	scanf("%f %f", &p_e_r, &p_e);
	
	result = (rate_1 * score_1) + (rate_2 * score_2) + (p_e_r * p_e);
	
	printf("점수는 %.1f입니다\n", result);
	
	return 0;
	
}