#include <iostream>
using namespace std;

#define LIMIT 100

int X[8] = { 1, 1, 2, 2, -1, -1, -2, -2 };
int Y[8] = { 2, -2, 1, -1, 2, -2, 1, -1 };

int n;
int board[LIMIT][LIMIT] = { 0 };

void printRes() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%02d ", board[i][j]);
        }
        cout<<endl;
    }
}

void Try(int i, int x, int y) {
    if(x > n - 1 || y > n - 1 || x < 0 || y < 0 || board[x][y]) return;

    if(i == n * n) {
        board[x][y] = i;
        printRes();
        exit(0);
    }

    board[x][y] = i;
    for(int j = 0; j < 8; j++) {
        Try(i + 1, x + X[j], y + Y[j]);      
    }
    board[x][y] = 0;
}

int main() {
    cout<<"Input size: ";
    cin >> n;

    cout<<"Input x, y: ";
    int x, y;
    cin >> x >> y;

    Try(1, x, y);
}
