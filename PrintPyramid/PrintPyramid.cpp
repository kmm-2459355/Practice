//==========================================================
//	ピラミッドを表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintPyramid(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段のピラミッドですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid(n);
	}
	return 0;
}

void PrintPyramid(int n)
{
	// ここをコーディングしてください。
	int a = 1;
	for (int i = 0; i < n; i++) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j < a; j++) {
			printf("*");
		}
		a += 2;
		printf("\n");
	}
}