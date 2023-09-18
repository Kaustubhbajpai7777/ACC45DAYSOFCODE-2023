#include <iostream>
using namespace std;

int main()
{
    int T; 
    cin >> T;
    for (int t = 0; t < T; t++) {
    int X; 
    cin >> X;
    if (X >= 2000) {
            cout << "YES" << endl;
    } else {
            cout << "NO" << endl;
        } 
    }
    return 0;
}
