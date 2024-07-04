//==========================================================
//	�z��̔��] �o�ߕ\��
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// �֐��v���g�^�C�v
void ReverseArray(int array[], int arraySize);
void dumpArray(int array[], int arraySize);
// �֐��}�N�� 
#define SWAP(type, x, y) do{type tmp=x; x=y; y=tmp; }while(false)

int main()
{
    int nx;
    srand(time(nullptr));

    do {
        printf("�v�f��:");
        scanf("%d", &nx);
    } while (nx <= 0);

    int* x = (int*)calloc(nx, sizeof(int));
    if (x == nullptr) {
        printf("calloc()���s");
        exit(1);
    }

    for (int i = 0; i < nx; i++) {
        x[i] = rand() % 100;
        //printf("x[%d] = %d\n", i, x[i]);
    }
    dumpArray(x, nx);
    ReverseArray(x, nx);

    printf("\n�v�f�̕��т𔽓]���܂���\n");
    dumpArray(x, nx);

    free(x);
    return 0;
}

void ReverseArray(int array[], int arraySize)
{
    // �������R�[�f�B���O���Ă��������B
    
    for (int i = 0; i < (arraySize / 2); i++){
        int a = 0;
        a = array[i];
        array[i] = array[(arraySize-1) - i];
        array[(arraySize -1)- i] = a;
        printf("a[%d]��a[%d]���������܂��B\n", i, (arraySize - 1) - i);
        dumpArray(array ,arraySize);
    }
}

void dumpArray(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}