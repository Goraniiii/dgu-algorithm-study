#include <string>
#include <vector>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    string tmp = my_string;

    for(int i : indices) {
        tmp[i] = NULL;
    }
    for(char &c : tmp) {
        if(c != NULL) {
            answer += c;
        }
    }

    return answer;
}