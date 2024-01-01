#include <stdio.h>

char finds(char l[]) {
    int i = 0;
    while (1) {
        if (l[i] == '<') {
            return l[i+1];
        }
        i++;
    }
}

int main() {
    unsigned long long n;
    char out[100] = "1234";
    char temp[100];
    int first = 1;
    scanf("%llu", &n);
    printf("O(");
    gets(temp);
    while (n--)
    {
        gets(temp);
        if (temp[0] != ' ' && !first) {
            printf("+");
        }
        printf("%c", finds(temp));
        if (first) {
            first = 0;
        }
    }
    printf(")");

    return 0;
}
// 3
// for(int i=0;i<n;i++)
//     for(int k=0;k<n;k++)
// for(int i=0;i<n;i++)