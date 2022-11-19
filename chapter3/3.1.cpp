#include<iostream>
using namespace std;

#define AMAX 100

int len;
int a[AMAX];

void Try(int i) {
    if(i == len) {
        for(int j = 0; j < len; j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        Try(i + 1);
    }
}

int main(){
    cin>>len;
    Try(0);
    return 0;
}
