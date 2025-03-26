#include <stdio.h>
#include <stdlib.h>

int main()
{
   int values[] = { 1, 3, 7, 9, 8, 6, 7, 11, 28, 0 };
    int size = 10;


    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (values[j] > values[j + 1]) {

                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < size; i++) {
        printf("%d\n", values[i]);
    }

    return 0;
}
