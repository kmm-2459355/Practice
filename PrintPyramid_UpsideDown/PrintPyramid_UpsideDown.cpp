//==========================================================
//	�s���~�b�h��\������ �|�u
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintPyramid_UpsideDown(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̃s���~�b�h�ł���? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid_UpsideDown(n);
	}
	return 0;
}

void PrintPyramid_UpsideDown(int n)
{
	// �������R�[�f�B���O���Ă��������B
	int a = (n*2)-1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++){
			printf(" ");
		}
		for (int j = 1; a >= j; j++) {
			printf("%d",i%10);
		}
		a -= 2;
		printf("\n");
	}
}