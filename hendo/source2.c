#include<stdio.h>

int diff(char* a, char* b)
{
	if (*a > * b)
		return *a - *b;
	else
		return *b - *a;
}

int main() 
{
	char ch1, ch2;
	printf("�� ���ڸ� �Է� : ");
	scanf("%c %c", &ch1, &ch2);

	printf("�� ������ ���� ==> %d", diff(&ch1,&ch2));
	return 0;
}