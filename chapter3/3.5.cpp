#include<iostream>
using namespace std;

#define MAX 12
int n;
int x[MAX];
bool col[MAX];

/* diagonal line */
bool up[MAX];
bool down[MAX];

void Try(int i) {
    if(i == n + 1) {
        for(int i = 1; i <= n; i++) {
            if(i != 1) {
                cout<<", ";
            }
            printf("(%d, %d)", i, x[i]);
        }
        cout<<";"<<endl;
    }

    for(int j = 1; j <= n; j++) {
        if(col[j] || up[i + j] || down[i - j]) continue; 

        x[i] = j;

        col[j] = true;
        up[i + j] = true;
        down[i - j] = true;

        Try(i + 1);

        col[j] = false;
        up[i + j] = false;
        down[i - j] = false;
    }
} 

int main(){
    cin>>n;
    Try(1);
    return 0;
}
