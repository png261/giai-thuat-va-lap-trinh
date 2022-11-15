#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;

    if(n <= 0) {
        return 0;
    }

    int x[n];

    for(int i = 0; i < n; i++) {
        x[i] = i + 1;
    }

    while(1) {
        for(auto n : x) {
            cout<<n<<" ";
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

        // another way to reverse
        /* int a = head; */ 
        /* int b = n - 1; */
        /* for(int i = head; i < n; i++) { */
        /*     if(a >= b) break; */

        /*     swap(x[a], x[b]); */
        /*     a++; */
        /*     b--; */
        /* } */
    }
}
