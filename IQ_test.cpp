#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int hashCount = 0, dotCount = 0;
            if (arr[i][j] == '#') hashCount++;
            else if (arr[i][j] == '.') dotCount++;

            if (arr[i + 1][j] == '#') hashCount++;
            else if (arr[i + 1][j] == '.') dotCount++;

            if (arr[i][j + 1] == '#') hashCount++;
            else if (arr[i][j + 1] == '.') dotCount++;

            if (arr[i + 1][j + 1] == '#') hashCount++;
            else if (arr[i + 1][j + 1] == '.') dotCount++;

            if (hashCount != dotCount) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
