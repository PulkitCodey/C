#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        int *ptr = (int*)malloc(1000000 * sizeof(int));

        // 🟡 ACTUALLY write to memory to force allocation
        for (int i = 0; i < 1000000; i++) {
            ptr[i] = i;
        }

        // No free(ptr); leads to memory leak
    }

    return 0;
}
