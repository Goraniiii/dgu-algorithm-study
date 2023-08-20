#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;

    for(int i : query) {
        if(i % 2 == 0) {
            copy(answer.begin(), answer.begin() + i, answer.begin());
        }
        else {
            copy(answer.begin() +  i, answer.end(), answer.begin());
        }
    }

    return answer;
}