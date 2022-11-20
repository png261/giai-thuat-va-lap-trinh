#include<iostream>
using namespace std;

int n, k;
int a[100];

void Try(int i) {
    if(i == k + 1) {
        for(int j = 1; j <= k; j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        Try(i + 1);
    }
}

int main(){
    cin>>n>>k;
    a[0] = 0;
    Try(1);
    return 0;
}
