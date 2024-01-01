#include <stdio.h>

#define ll unsigned long long

void move(ll l[], ll f, ll t) {
    ll temp = l[f];
    if (f < t) {
        for (ll i = f; i < t; i++) {
            l[i] = l[i+1];
        }
    }
    else if (f > t) {
        for (ll i = f; i > t; i--) {
            l[i] = l[i-1];
        }
    }
    else {
        return;
    }
    l[t] = temp;
}

ll getpos(ll l[], ll n) {
    ll i = 0;
    while (1)
    {
        if (l[i] == n) {
            return i;
        }
        i++;
    }
    
}

int main() {
    ll l[500000], n;
    scanf("%llu", &n);
    for (ll i = 0; i < n; i++) {
        l[i] = i + 1;
    }

    ll o, a, b;
    while (1)
    {
        scanf("%llu", &o);
        if (o == 3) {
            break;
        }
        else if (o == 1) {
            scanf("%llu%llu", &a, &b);
            a = getpos(l, a);
            b = getpos(l, b);
            if (b > a) {
                b -= 1;
            }
            move(l, a, b);
            // printf("%llu %llu pos\n", a, b);
        }
        else {
            scanf("%llu", &a);
            printf("%llu\n", l[a-1]);
        }
        // for (ll i = 0; i < n; i++) {
        //     printf("%llu ", l[i]);
        // }
        // printf("\n");
    }

    return 0;
}
