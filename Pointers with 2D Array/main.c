#include <stdio.h>
#include <stdlib.h>

int main()
{
        char str1[] = { 'K', 'H', 'A', 'L', 'E', 'D' };
	char str2[] = "KHALED";
	char *str3 = "KHALID";
	char  *cPtr = str1;

	short sArr[] = {1, 2, 3, 4, 5};
	short sArr2D[][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };

        short *sPtr1 = sArr;
	short (*sPtr2)[5] = sArr2D;  // (Pointer to Array of 2D) [increment by 5 places]..
	short *sPtr3[5];    // Array of Pointers of type short

        printf("sizeof(str1) = %u\n", sizeof(str1));
	printf("sizeof(str2) = %u\n", sizeof(str2));
	printf("sizeof(str3) = %u\n", sizeof(str3));
	printf("sizeof(cPtr) = %u\n", sizeof(cPtr));
	printf("\n");

	printf("sizeof(sArr) = %u\n", sizeof(sArr));
	printf("sizeof(sPtr1) = %u\n", sizeof(sPtr1));
	printf("sizeof(sArr2D) = %u\n", sizeof(sArr2D));
	printf("sizeof(sPtr2) = %u\n", sizeof(sPtr2));
	printf("sizeof(*sPtr2) = %u\n", sizeof(*sPtr2));
	printf("sizeof(sPtr3) = %u\n", sizeof(sPtr3));
	printf("\n");

	printf("sArr2D[1][2] = %d\n", sArr2D[1][2]);
	printf("sPtr2[0][0] = %d, sPtr2[1][2] = %d\n", sPtr2[0][0], sPtr2[1][2]);
	printf("*(* (sArr2D + 1) + 2) = %d\n", *(* (sArr2D + 1) + 2));  // same as sArr2D[1][2]
	printf("*(*(sArr2D) + 1*5 + 2) = %d\n\n", *(*(sArr2D) + 7));  // same as sArr2D[1][2]
    return 0;
}
