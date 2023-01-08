//#include "testlib.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <bitset>
#include <algorithm>
#include <set>
#include <map>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <numeric>
#include <random>
using namespace std;

#define int int64_t
#define sp " "
#define all(x) (x).begin(), (x).end()
#define fast; ios_base::sync_with_stdio(0);cin.tie(NULL);

int32_t main(){
    fast;

    string s, t;
    cin >> s >> t;
    s = "1" + s;
    t = "1" + t;
    vector<vector<int>> d(s.size() + 1, vector<int> (t.size() + 1));
    for(int i = 1; i <= s.size(); i++)
        d[i][0] = i;
    for(int j = 1; j <= t.size(); j++)
        d[0][j] = j;
    for(int i = 1; i <= s.size(); i++)
        for(int j = 1; j <= t.size(); j++)
            d[i][j] = min(d[i-1][j] + 1, min(d[i][j-1] + 1, d[i-1][j-1] + (s[i] != t[j])));


    cout << d[s.size()][t.size()] << endl;
    return 0;
}
