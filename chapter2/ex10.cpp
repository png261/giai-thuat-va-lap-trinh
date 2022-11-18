#include<iostream>
using namespace std;

bool newSum(int (&x)[], int n) {
    int i = n - 1;
    while(x[i] <= 1) {
       i--;   
    }    
    if(i < 0) return false;

    x[i]--;
    x[i + 1] = n;
    for(int j = 0; j <= i; j++) {
        x[i + 1] -= x[j];
    }

    for(int j = i + 2; j < n; j++) {
        x[j] = 0;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++){
        x[i] = 0;
    }
    x[0] = n;

    do {
        bool isPrint = true;
        for(int i = 0; i < n - 1; i++){
            if(x[i] < x[i + 1]) {
                isPrint = false;
                break;
            };
        }
        if(!isPrint) continue;

        for(int i = 0; i < n; i++){
            if(x[i] == 0) break;
            if(i != 0) cout<<" + ";
            cout<<x[i];
        }
        cout<<endl;

    } while(newSum(x, n));

    return 0;
}
