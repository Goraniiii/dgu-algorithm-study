#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string str;
    bool flag;

    for(int i = l; i <= r; i++) {
        str = to_string(i);
        flag = true;
        for(char c : str) {
            if(c != '0' && c != '5') {
                flag = false;
                break;
            }
        }
        if(flag)    answer.push_back(i);
    }

    if(answer.empty())  answer.push_back(-1);

    return answer;
}