#include <iostream>

using namespace std;

#define MAX 100
int n;
int k;
int x[MAX];

void Try(int i) {
    if(i == k) {
        for(int i = 0; i < k; i++) {
            cout<<x[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = 1; j <= n; j++) {
        x[i] = j;
        Try(i + 1);
    }
}

int main() {
    cin>>n>>k;
    Try(0);
}
