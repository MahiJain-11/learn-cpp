
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int solve(string &s, int i) {
        
      
        if (i == s.size()) {
            return 1;
        }

        if (s[i] == '0') {
            return 0;
        }

      
        int ways = solve(s, i + 1);

     
        if (i + 1 < s.size()) {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if (num >= 10 && num <= 26) {
                ways += solve(s, i + 2);
            }
        }

        return ways;
    }

    int numDecodings(string s) {
        return solve(s, 0);
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Number of decoding ways: "
         << sol.numDecodings(s) << endl;

    return 0;
}
