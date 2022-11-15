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

    for(auto &n : x) {
        n = 0;
    }

    while(1) {
        for(auto &n : x) {
            cout<<n<<" ";
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
