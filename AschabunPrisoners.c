#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
            //find the next alive prisoner
        while(*killerPtr == 0) {
            killerPtr++;
            if (killerPtr - &prisoners[0] >= numPrisoners) killerPtr = &prisoners[0];
        }

        //Set the count if found alive
        int count = 1;

        while (count < m) {
            killerPtr++;

            if (killerPtr - &prisoners[0] >= numPrisoners) killerPtr = &prisoners[0];
            
            if (*killerPtr == 0) continue;

            count ++;
        }
		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    array[killedPrisoner - 1] = 0;
}