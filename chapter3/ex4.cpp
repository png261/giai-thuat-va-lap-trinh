#include<iostream>
using namespace std;

#define MAX 100
int n, k;
int x[MAX];

void Try(int i) {
    if(i == k + 1) {
        for(int j = 1; j <= k; j++) {
            cout<<x[j]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;
        Try(i + 1);
    }
}

int main(){
    cin>>n>>k;
    x[0] = 0;
    Try(1);
    return 0;
}
