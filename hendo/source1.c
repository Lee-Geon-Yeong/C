#include<stdio.h>

void swap(char* a, char* b) {
	char imsi;
	imsi = *a;
	*a = *b;
	*b = imsi;
}

int main()
{
	char ch1, ch2;
	printf("�� ���ڸ� �Է� : ");
	scanf_s("%c %c", &ch1, &ch2);

	swap(&ch1, &ch2);

	printf("�ٲ� ���� ==> %c %c", ch1, ch2);

}