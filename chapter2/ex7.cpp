#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    if(n <= 0) {
        return 0;
    }

    string male[n];
    string female[n];
    for(auto &name : male){
        cin>>name;
    }
    for(auto &name : female){
        cin>>name;
    }

    int imale[n];
    int ifemale[n];
    for(int i = 0; i < n; i++) {
        imale[i] = i;
        ifemale[i] = i;
    }

    int nm = n - 1;
    int nf = n;
    bool isMale = false;

    while(1) {
        if(!isMale) {
            for(int i = 0; i < n * 2; i++) {
                if(i % 2 == 0) {
                    cout<<male[imale[i / 2]]<<" ";
                } else {
                    cout<<female[ifemale[i / 2]]<<" ";
                }
            }
            cout<<endl;
        }
        
        const int ni = isMale ? nm : nf;
        int (&x)[n] = isMale ? imale : ifemale;
        isMale = false;

        int head = ni - 1;

        while(head >= 0 && x[head] < x[head - 1]) {
            head--;
        }

        if(head <= 0){
            if(isMale) {
                break;
            }

            isMale = true;
            for(int i = 0; i < n; i++) {
                ifemale[i] = i;
            }
            continue;
        }

        // swap 
        for(int i = ni - 1; i >= head; i--) {
            if(x[i] > x[head - 1]) {
                swap(x[i], x[head - 1]);
                break;
            }
        }

        // reverse from head to n;
        for(int i = head; i < ni; i++) {
            int end = (ni - 1) - (i - head);
            if(i > end) break;
            swap(x[i], x[end]);
        }
    }
}
