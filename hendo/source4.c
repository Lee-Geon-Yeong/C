#include<stdio.h>
int main()
{
	int i=0, number, sum=0, mul=1;
	while (i < 4) {
		i++;
		printf("&d��° ���ڸ� �Է��ϼ��� : ", i);
		scanf_s("%d", &number);
		sum = sum + number;
		mul = mul * number;
	}
	printf("�հ� ==> %d\n", sum);
	printf("���� ==> %d", mul);

	return 0;
}