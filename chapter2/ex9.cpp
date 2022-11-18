#include <iostream>
using namespace std;

int main(){
    string s = "MISSISSIPPI";
    for(int i = 0; i < s.length(); i++) {
        for(int j = 0; j < s.length(); j++) {
            if(s[j] > s[j + 1]) swap(s[j], s[j + 1]);
        }
    }

    while(1){
        for(auto ch : s) {
            cout<<ch;
        }
        cout<<endl;

        int i = s.length() - 1;
        while(s[i] <= s[i - 1]) i--;
        if(i <= 1) break;

        swap(s[i], s[i - 1]);
    }
}
