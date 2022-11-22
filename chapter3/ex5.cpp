#include <iostream>

using namespace std;

#define MAX 100
int n, k;
int x[MAX];
int xi[MAX];

/* TODO: wrong when numbers are same */
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
    k = n;
    x[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin>>x[i];
    }

    while(k) {
        Try(1);
        k--;
    }
}
