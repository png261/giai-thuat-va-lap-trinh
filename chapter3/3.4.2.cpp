#include<iostream>
using namespace std;

int n;
int i = 0;
int a[100];

void Try(int n, int i) {
    if(n == 0) {
        for(int j = 1; j <= i; j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int value = a[i] + 1; value <= n; value++) {
        a[i + 1] = value;
        Try(n - value, i + 1);
    }
}

int main(){
    cin>>n;
    a[0] = 0;
    Try(n, i);
    return 0;
}
