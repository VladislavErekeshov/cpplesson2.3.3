﻿#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d, e;
    cin >> x;
    a = x / 10000 % 10;
    b = x / 1000 % 10;
    c = x / 100 % 10;
    d = x / 10 % 10;
    e = x / 1 % 10;
    cout << e << d << c << b << a;
    return 0;
}