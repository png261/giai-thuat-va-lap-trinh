#include <iostream>

using namespace std;

#define LIMIT 100
int n, k;

int Max;
int Min;

int x[LIMIT];
int xi[LIMIT];

void Try(int i) {
    if(i == k + 1) {
        for(int j = 1; j <= k; j++) {
            cout<<x[xi[j]]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = xi[i - 1] + 1; j <= n - k + i; j++) {
        xi[i] = j;
        Try(i + 1);
    }
}

int main() {
    cin>>n;
    cin>>Min;
    cin>>Max;

    x[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin>>x[i];
        if(x[i] < Min || x[i] > Max) {
            i--;
            n--;
            continue;
        }
    }
    k = n;

    while(k) {
        Try(1);
        k--;
    }
}
