#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char word[21];
	char *p;
	p = word;
	printf("���ڸ� �Է�<20�� �̸�> : ");
	gets(word);
	printf("\n");

	for (i = strlen(p) - 1; i >= 0; i--) {
		printf("%c", p[i]);
	}

	return 0;
}