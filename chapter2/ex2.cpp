#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int x[k];
    for(int i = 0; i < k; i++) {
        x[i] = 1;
    }

    int c = 0;
    while(1) {
        for(auto n : x){
            cout<<n<<" ";
        }
        cout<<endl;

        int i = k - 1;
        while(x[i] == n) i--; 
        if(i < 0) break;
        x[i]++;

        for(int j = i + 1; j < k; j++) {
            x[j] = 1;
        }
    }

    return 0;
}
