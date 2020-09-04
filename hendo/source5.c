#include<stdio.h>
int main()
{
	int aa[3][4];
	int i=0, k=0, val=1;
	while(i<3){
		while(k < 4) {
			aa[i][k] = val;
			val++;
			k++;
		}
		i++;
	}
	return 0;
}