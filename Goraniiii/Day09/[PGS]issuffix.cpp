#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int diff = my_string.length() - is_suffix.length();
    for(int i = is_suffix.length() - 1; i >= 0; i--) {
        if(is_suffix[i] != my_string[i + diff]) return 0;
    }

    return 1;

}