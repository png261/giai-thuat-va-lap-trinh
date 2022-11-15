#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;

    if(n <= 0) {
        cout<<0;
        return 0;
    };

    string s = string(n, '0');
    while(s != string(n, '1')) {
        for(auto &ch : s) {
            if(ch == '0') {
                ch = '1';
                break;
            } 
            ch = '0';
        }
        cout<<s<<endl;
    }
}
