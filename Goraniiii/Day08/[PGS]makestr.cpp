#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";

    for(int num : index_list) {
        answer += my_string[num];
    }

    return answer;
}