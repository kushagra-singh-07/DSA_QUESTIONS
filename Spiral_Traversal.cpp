#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >>n>>m;

    int arr[100][100];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    while(top <= bottom && left <= right) {
       
        for(int j = left; j <= right; j++)
            cout << arr[top][j] << " ";
        top++;

        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        if(top <= bottom) {
            for(int j = right; j >= left; j--)
                cout << arr[bottom][j] << " ";
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
    return 0;
}

