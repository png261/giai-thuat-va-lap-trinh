#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n < 4) {
        return 0;
    }

    int a[n];

    int first = 1;
    int second = n - 1;

    while(1) {
        for(int i = 0; i < n; i++) {
            a[i] = (i == first || i == second);
            cout<<a[i]<<" ";
        }
        cout<<endl;

        for(int i = 0; i < n; i++) {
            if(i == first - 1 || i == second - 1 || i == first || i == second) {
                continue;
            }

            a[i] = 1;
            for(auto x : a) {
                cout<<x<<" ";
            }
            cout<<endl;
        }

        second--;
        if(second - first == 1) {
            first++;
            second = n - 1;
        }

        if(n - first < 3) {
            break;
        }
    }
    return 0;
}
