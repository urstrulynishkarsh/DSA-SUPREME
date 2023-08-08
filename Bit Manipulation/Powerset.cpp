#include<iostream>
#include<vector>
using namespace std;

void PowerSet(string &s, vector<string> &ans) {
    int n = s.length();
    for (int num = 0; num < (1 << n); num++) {
        string temp = "";
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (num & (1 << i)) {
                temp.push_back(ch);
            }
        }
        ans.push_back(temp);
    }

}

int main() {
    string s = "abc";
    vector<string> ans;
    PowerSet(s, ans);
    cout<<"size of ans: "<<ans.size()<<endl;
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}
