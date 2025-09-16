#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int arr[100][100];
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> arr[i][j];

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < N; i++) {
        int start = 0, end = N - 1;
        while(start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }  
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}

