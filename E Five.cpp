#include <iostream>
#include <cstdio>

using namespace std;

char a[1000005];
char b[1000005];

int main() {
    int n;
    scanf("%d", &n);
    scanf("%s", a);
    scanf("%s", b);
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (a[i-1] != b[i-1] && a[i] != b[i] && a[i-1] != a[i]) {
            swap(a[i], a[i-1]);
            sum++;
        }
    }
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            sum++;

    cout << sum << endl;
    
    return 0;
}
