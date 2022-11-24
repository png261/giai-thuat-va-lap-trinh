#include<iostream>
using namespace std;

#define LIMIT 100
int x[LIMIT];
int l, n;

bool isRepeatSub() { 
    for(int j = 0; j < n - l; j++) {
        bool repeatSub = true;

        for(int k = 0; k < l; k++) {
            if(x[j + k] != x[j + k + 1]) {
                repeatSub = false;
                break;
            };
        }

        if(repeatSub) {
            return true;
        }
    }

    return false;
}

void Print() {
    for(int j = 0; j < n; j++) {
        cout<<x[j]<<" ";
    }
    cout<<endl;
}

void Try(int i) {
    if(i == n) {
        if(!isRepeatSub()) Print();
        return;
    }

    for(int j = 0; j <= 1; j++) {
        x[i] = j;
        Try(i + 1);
    }
}


int main() {
    cin>>n>>l;
    Try(0);
    return 0;
}
