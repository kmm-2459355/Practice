//=========================================================
//	ハノイの塔　解法
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()

typedef enum {
	A = 1,
	B = 2,
	C = 3,
} POS;

// 関数プロトタイプ
void move(int no, POS from, POS to);
const char getPollName(POS poll);

int main()
{
	while (true) {
		int n;
		do {
			printf("ハノイの塔\a円盤の数:");
			scanf("%d", &n);
		} while (n < 1);

		move(n, A, C);
	}
	return 0;
}

void move(int no, POS from, POS to)
{
	//char strFrom;
	//char strTo;
	
	POS tmp = (POS)((A + B + C) - from - to);
	if (no > 1) {
		move(no - 1, from, tmp);
	}
	const char *strFrom = getPollName(from);
	const char *strTo = getPollName(to);
	printf("円盤[%d]を %s軸から %s軸へ移動\n", no, strFrom, strTo);
	if (no > 1) {
		move(no - 1, tmp, to);
	}
}

const char *getPollName(POS poll)
{
	if (poll == A)
		return "A";
	else if (poll == B)
		return "B";
	else
		return "C";
}
