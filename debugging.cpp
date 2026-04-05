#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        stack<int> battlefield;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

           
            while (!battlefield.empty() && battlefield.top() <= x) {
                battlefield.pop();
            }

            battlefield.push(x); 

            cout << battlefield.size();
            if (i < N - 1) cout << " ";
        }
        cout << '\n';
    }

    return 0;
}