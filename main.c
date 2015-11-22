#include <stdio.h>
#include <sys/time.h>
struct timeval stop, start;

int main() {
    int i;

    int x[8192], y[8192];
    int a = 1, b = 2, c = 3;

    gettimeofday(&start, NULL);

    for (i = 0; i < 8192; i++) {
            y[i] = a * x[i] * x[i] + b * x[i] + c;
    }

    gettimeofday(&stop, NULL);

    printf("%d us\n", stop.tv_usec - start.tv_usec);
    return 0;
}


