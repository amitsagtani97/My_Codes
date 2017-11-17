#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long int low, high, n, count, i;

    scanf ("%ld %ld", &low, &high);

    count = 0;
    n = 0;

    if (low <= 3)
        count++;


    while (n<low)
        n += 6;

    while (n < high) {
        i = 1;
        int flag = 0;

        while (i * i < n + 1) {
            i++;
            if ((n - 1) % i == 0 || (n + 1) % i == 0)
                flag = 1;
        }
        if (!flag)
            count++;
        n += 6;
    }
    printf("%ld",count);
}