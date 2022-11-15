#include <iostream>

using namespace std;
int main(){
    int n, k;
    cin>>n>>k;

    if(k <= 0 || n <= 0 || k > n) {
        return 0; 
    }

    int x[k];


    for(int i = 0; i < k; i++) {
        x[i] = i + 1;
    }

    while(1) {
        for(auto n : x) {
            cout<<n<<" ";
        }
        cout<<endl;

        int base = k - 1;
        while(x[base] == n - k + base + 1) {
            base--;
        }
        if(base < 0) break;

        x[base]++;
        for(int j = base + 1; j < k; j++) {
            x[j] = x[j - 1] + 1;
        }
    }
}
