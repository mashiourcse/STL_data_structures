#include <bits/stdc++.h>

using namespace std;

int main(){

    pair<int,int> x;

    x.first = 100;
    x.second = 200;

    cout << x.first << " " << x.second << endl;

    pair<int,int> y(101,202);

    cout << y.first << " " << y.second << endl;


    cout << endl;
    pair<int,int> z = make_pair(100, 200);

   // cout << (x == y) << endl;
   // cout << (x == z) << endl;

    x.swap(y);

    cout << x.first << " " << x.second << endl;
    cout << y.first << " " << y.second << endl;
    return 0;

}
