#include<iostream>
using namespace std;

int n, k;
int a[100];
bool c[100];

void Try(int i) {
    if(i == k + 1) {
        for(int j = 1; j <= k; j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = 1; j <= n; j++) {
        if(c[j]) continue;

        a[i] = j;

        c[j] = true;
        Try(i + 1);
        c[j] = false;
    }
}

int main(){
    cin>>n>>k;
    Try(1);
    return 0;
}
