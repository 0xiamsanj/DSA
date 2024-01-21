#include <iostream>
#include <string>
using namespace std;

bool isValidSubstring(const string& substring, const string& s2) {
    size_t len = substring.length();
    for (size_t i = 0; i < s2.length(); ++i) {
        if (s2.compare(i, len, substring) == 0 || s2.compare(i, len, string(substring.rbegin(), substring.rend())) == 0) {
            return true;
        }
    }
    return false;
}

string substring_quest(const string& s1, const string& s2) {
    size_t s1Index = 0;
    string result;

    while (s1Index < s1.length()) {
        string currentSubstring;
        bool found = false;

        for (char s2Char : s2) {
            currentSubstring += s2Char;

            if (currentSubstring == s1.substr(s1Index, currentSubstring.length())) {
                found = true;
            }

            if (currentSubstring == string(s1.substr(s1Index, currentSubstring.length()).rbegin(), s1.substr(s1Index, currentSubstring.length()).rend())) {
                found = true;
            }

            if (found) {
                s1Index += currentSubstring.length();
                result += currentSubstring;
                break;
            }
        }

        if (!found) {
            return "Impossible";
        }
    }

    return result;
}

int main() {
    string S1, S2;

    cin >> S1;
    cin >> S2;

    cout << substring_quest(S1, S2) << endl;

    return 0;
}

