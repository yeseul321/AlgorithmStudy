#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstdlib>

using namespace std;

void calcu(stack<long long> st, vector<string> vs, queue<long long> numqu) {
    long long pshnum = 0;
    long long buf = 0, buf2 = 0;

    for (auto s : vs) {
        if (s == "NUM") {
            pshnum = numqu.front();
            numqu.pop();
            st.push(pshnum);
            continue;
        }
        else if ((s == "POP" || s == "INV" || s == "DUP") && st.empty()) {
            cout << "ERROR" << '\n';
            return;
        }
        else if ((s != "POP" && s != "INV" && s != "DUP") && (st.size() < 2)) {
            cout << "ERROR" << '\n';
            return;
        }
        if (s == "POP") st.pop();
        else if (s == "INV") {
            buf = st.top();
            st.pop();
            st.push(-buf);
        }
        else if (s == "DUP") {
            buf = st.top();
            st.push(buf);
        }
        else if (s == "SWP") {
            buf = st.top();
            st.pop();
            buf2 = st.top();
            st.pop();
            st.push(buf);
            st.push(buf2);
        }
        else if (s == "ADD") {
            buf = st.top();
            st.pop();
            buf2 = st.top();
            st.pop();
            if (abs(buf + buf2) > 1000000000) {
                cout << "ERROR" << '\n';
                return;
            }
            st.push(buf + buf2);
        }
        else if (s == "SUB") {
            buf = st.top();
            st.pop();
            buf2 = st.top();
            st.pop();
            if (abs(buf2 - buf) > 1000000000) {
                cout << "ERROR" << '\n';
                return;
            }
            st.push(buf2 - buf);
        }
        else if (s == "MUL") {
            buf = st.top();
            st.pop();
            buf2 = st.top();
            st.pop();
            if (abs(buf * buf2) > 1000000000) {
                cout << "ERROR" << '\n';
                return;
            }
            st.push(buf * buf2);
        }
        else if (s == "DIV") {
            buf = st.top();
            st.pop();
            buf2 = st.top();
            st.pop();
            if (buf == 0) {
                cout << "ERROR" << '\n';
                return;
            }
            else if (buf * buf2 < 0) st.push(-(abs(buf2) / abs(buf)));
            else st.push(abs(buf2) / abs(buf));
        }
        else if (s == "MOD") {
            buf = st.top();
            st.pop();
            buf2 = st.top();
            st.pop();
            if (buf == 0) {
                cout << "ERROR" << '\n';
                return;
            }
            else if (buf2 < 0) {
                st.push(-(abs(buf2) % abs(buf)));
            }
            else st.push(abs(buf2) % abs(buf));
        }
    }
    if (st.size() != 1) {
        cout << "ERROR" << '\n';
        return;
    }
    cout << st.top() << '\n';
}


int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long num = 0, input = 0;
    long long psh = 0;
    string str = "";
    vector<string> vs;
    queue<long long> numqu;
    stack<long long> st;
    cin >> str;

    while (str != "QUIT") {
        while (str != "END") {
            vs.push_back(str);
            if (str == "NUM") {
                cin >> psh;
                numqu.push(psh);
            }
            cin >> str;
        }

        cin >> num; // 입력영역의 숫자 갯수

        for (int i = 0; i < num; i++) {
            cin >> input;
            st.push(input);
            calcu(st, vs, numqu);
            while (!st.empty()) st.pop();
        }
        vs.clear();
        while (!numqu.empty()) numqu.pop();

        cout << '\n';
        cin >> str;
    }
    return 0;
  
}