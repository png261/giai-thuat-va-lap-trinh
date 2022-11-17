#include<iostream>
using namespace std;

bool nextSub(int(&x)[], int n, int k) {
    int i = k - 1; 
    while(x[i] == n - k + i + 1) {
        i--;
    }
    if(i < 0) return false;

    x[i]++;
    for(int j = i + 1; j < k; j++) {
        x[j] = x[j - 1] + 1;
    }

    return true;
}

bool nextPermutation(int(&x)[], int n) {
    int head = n - 1;
    while(head >= 0 && x[head] < x[head - 1]) {
        head--;
    }

    if(head <= 0){
        return false;
    }

    // swap 
    for(int i = n - 1; i >= head; i--) {
        if(x[i] > x[head - 1]) {
            swap(x[i], x[head - 1]);
            break;
        }
    }

    // reverse from head to n;
    for(int i = head; i < n; i++) {
        int end = (n - 1) - (i - head);
        if(i > end) break;
        swap(x[i], x[end]);
    }

    return true;
} 

int main(){
    int n, k;
    cin>>n>>k;

    if(k <= 0 || n <= 0 || k > n) {
        return 0; 
    }

    int x[k];
    for(int i = 0; i < k; i ++) {
        x[i] = i + 1;
    }

    int c = 0;
    do {
        int cx[k];
        for(int i = 0; i < k; i ++) {
            cx[i] = x[i];
        }

        do {
            for(int i = 0; i < k; i++) {
                cout<<cx[i]<<" ";
            }
            cout<<endl;
        } while(nextPermutation(cx, k)); 
    } while(nextSub(x, n, k));

    return 0;
}
