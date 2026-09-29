#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12)
            hour = 0;
    }
    else {
        if (hour != 12)
            hour += 12;
    }

    if (hour < 10)
        cout << "0";

    cout << hour << s.substr(2, 6);

    return 0;
}