#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;

    for(string intStr : intStrs) {
        int a = stoi(intStr.substr(s, l));
        if(a > k)   answer.push_back(a);
    }

    return answer;
}