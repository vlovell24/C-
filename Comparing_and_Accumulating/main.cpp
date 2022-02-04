#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

int main(){

    vector<int> a{ 1, 2, 3, 4, 5 };
    vector<int> b{ 1, 2, 0, 4 };

    //comparing values
    bool same = equal(begin(a), end(a), begin(b), end(b));
    auto firstchange = mismatch(begin(a), end(a), begin(b));

    int avalue = *(firstchange.first);
    int bvalue = *(firstchange.second);
    auto distance = firstchange.first - begin(a);
    cout << same << endl << avalue << endl;

    //accumulating items
    int total = 0;
    total = accumulate(begin(a), end(a), 0);
    cout << total << endl;






    return 0;


}
