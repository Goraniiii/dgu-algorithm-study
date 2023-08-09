#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    for(int i = s; i <= (s + e) / 2; i++) {
        swap(my_string[i], my_string[s + e - i]);
    }

    return my_string;
}