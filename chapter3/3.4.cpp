#include<iostream>
using namespace std;

int n;
int x[100];
int t[100];

void Try(int i) {
    for(int j = x[i - 1]; j <= (n - t[i - 1]) / 2; j++) {
        x[i] = j;
        t[i] = t[i - 1] + j;
        Try(i + 1);
    }

    x[i] = n - t[i - 1];

    for(int j = 1; j <= i; j++) {
        if(j != 1) cout<<" + ";
        cout<<x[j];
    }
    cout<<endl;
}

int main(){
    x[0] = 1;
    t[0] = 0;

    cin>>n;
    Try(1);
    return 0;
}
