#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;

    if(n <= 0) {
        return 0;
    }

    string names[n];
    for(auto &name : names){
        cin>>name;
    }

    n--;

    int x[n];

    for(int i = 0; i < n; i++) {
        x[i] = i + 1;
    }

    while(1) {
        cout<<names[n]<<" ";
        for(auto i : x) {
            cout<<names[i - 1]<<" ";
        }
        cout<<endl;

        int head = n - 1;
        while(head >= 0 && x[head] < x[head - 1]) {
            head--;
        }

        if(head <= 0){
            break;
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
    }
}
