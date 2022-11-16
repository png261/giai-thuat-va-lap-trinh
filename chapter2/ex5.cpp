#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;

    if(n <= 0) {
        cout<<0;
        return 0;
    };

    int x[n];

    for(auto &a : x) {
        a = 0;
    }

    while(1) {
        for(int i = 0; i < n; i++) {
            if(x[i]) {
                cout<<i + 1<<" ";
            }
        }
        cout<<endl;

        int i = n - 1;
        while(x[i] == 1) i--;
        if(i < 0) break;

        x[i] = 1;
        for(int j = i + 1; j < n; j++) {
            x[j] = 0;
        }
    }
}

