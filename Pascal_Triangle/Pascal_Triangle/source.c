#include<stdio.h>
/*
* �Եݹ鷽ʽʵ���������
* ȱ��:Ч�ʽϵ�
*/
int Pascal_Triangle(int i, int j)
{
	if (j == 0 || i == j)
		return 1;
	return Pascal_Triangle(i - 1, j) + Pascal_Triangle(i - 1, j - 1);
}
int main()
{
	int N;
	printf("�����������,������������ǵĸ߶�:\n");
	scanf_s("%d", &N);
	printf("\n");
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j <= i; j++)
		{
			printf("%d ", Pascal_Triangle(i, j));
			if (i == j)
				printf("\n");
		}
}