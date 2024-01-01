#include <stdio.h>

int main() {
    unsigned long long a, b, c, d;
    scanf("%llu%llu%llu%llu", &a, &b, &c, &d);
    a *= d;
    c *= b;
    if (a + c > b * d) {
        printf("0");
        return 0;
    }
    printf("1");
    return 0;
}
