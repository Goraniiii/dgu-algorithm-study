#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;

    for(vector<int> query : queries) {
        for(int i = 0; i <= (query[1] - query[0]) / 2; i++) {
            swap(answer[query[0] + i], answer[query[1] - i]);
        }
    }

    return answer;
}