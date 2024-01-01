#include <stdio.h>

int con(char l[], char m[], int pos, int temp, int sec) {
    if (sec == 0) {
        if (l[pos] == '\0') {
            return con(l, m, 0, temp, 1);
        }
        temp += l[pos] - 48;
        if (temp >= 11) {
            temp %= 11;
        }
        temp *= 10;
        // printf("%d %d %c\n", temp, pos, l[pos]);
        return con(l, m, pos+1, temp, 0);
    }
    if (m[pos] == '\0') {
        return temp / 10;
    }
    temp += m[pos] - 48;
    if (temp >= 11) {
        temp %= 11;
    }
    temp *= 10;
    return con(l, m, pos+1, temp, 1);
}

int main() {
    char a[101], b[101];
    scanf("%s%s", a, b);
    printf("%s%s\n%s", a, b, (con(a, b, 0, 0, 0) == 0 ? "Yes" : "No"));

    return 0;
}
