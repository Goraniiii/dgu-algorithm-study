#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int num = 0;

    for(char &c : number) {
        num += c - '0';
    }

    answer = num % 9;

    return answer;
}
// 단순히 stoi로 int 변환도 가능하겠으나, 입력 number가 길 경우 불가능
// 본 문제는 합을 통해 나머지를 구하도록 제시됨