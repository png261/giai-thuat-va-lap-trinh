#include <iostream>

using namespace std;
#define LIMIT 100

int n;
int x[LIMIT];
bool c[LIMIT];

void Try(int i) {
    if(i == n + 1) {
        for(int j = 1; j <= n; j++)  {
            cout<<x[j]<<" ";
        }
        cout<<endl;
    }

    for(int j = 1; j <= n; j++) {
        if(i == j || c[j]) continue;

        x[i] = j;
        c[j] = true;
        Try(i + 1);
        c[j] = false;
    }
}

int main() {
    cin>>n;
    Try(1);
}
