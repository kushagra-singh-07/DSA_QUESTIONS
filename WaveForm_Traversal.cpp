#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int arr[N][M];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    for(int j = 0; j < M; j++) {
        if(j % 2 == 0) {
    
            for(int i = 0; i < N; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for(int i = N-1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    
    return 0;
}
