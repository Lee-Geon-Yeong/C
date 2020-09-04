#include<stdio.h>
int main()
{
	int i=0, number, sum=0, mul=1;
	while (i < 4) {
		i++;
		printf("&d번째 숫자를 입력하세요 : ", i);
		scanf_s("%d", &number);
		sum = sum + number;
		mul = mul * number;
	}
	printf("합계 ==> %d\n", sum);
	printf("곱셈 ==> %d", mul);

	return 0;
}