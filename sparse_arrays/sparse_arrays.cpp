#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);

    for (int i = 0; i < n; i++)
        cin >> strings[i];

    int q;
    cin >> q;

    vector<string> queries(q);

    for (int i = 0; i < q; i++)
        cin >> queries[i];

    for (int i = 0; i < q; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (queries[i] == strings[j])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}