#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;

    vector<int> arr;
    vector<int> dif;
    int cnt = 0;

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    sort(arr.begin(), arr.end());

    for(int i = 1; i < arr.size(); i++) {
        dif.push_back(arr[i] - arr[i - 1]);
        if(arr[i] - arr[i - 1] != 0)  cnt++;
    }

    switch (cnt)
    {
    case 0:
        return 1111 * arr[0];
    
    case 1:
        if(dif[0] != 0) {
            int a = 10 * arr[3] + arr[0];
            return a * a;
        }
        else if(dif[1] != 0) {
            return abs(arr[0] - arr[3]) * (arr[0] + arr[3]);
        }
        else {
            int a = 10 * arr[0] + arr[3];
            return a * a;
        }
        
    case 2:
        if(dif[0] == 0) {
            return arr[2] * arr[3];
        }
        else if(dif[1] == 0) {
            return arr[0] * arr[3];
        }
        else {
            return arr[0] * arr[1];
        }
    case 3:
        return arr[0];
    }

}