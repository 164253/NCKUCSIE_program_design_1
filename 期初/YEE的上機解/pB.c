#include <stdio.h>

int main() {
    long long a;
    scanf("%lld", &a);
    printf("%s", (a % 2 ? "Yes" : "No"));
    return 0;
}
