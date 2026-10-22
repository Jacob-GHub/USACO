// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1, s1;
    int c2, s2;
    int c3, s3;

    cin >> c1 >> s1 >> c2 >> s2 >> c3 >> s3;
    vector<int> capacities = {c1, c2, c3};
    vector<int> milks = {s1, s2, s3};

    for (int i = 0; i < 100; ++i)
    {
        int a = i % 3;
        int b = (a + 1) % 3;

        int b_space = capacities[b] - milks[b];
        int pour = min(b_space, milks[a]);

        milks[b] += pour;
        milks[a] -= pour;
    }
    cout << milks[0] << endl
         << milks[1] << endl
         << milks[2] << endl;

    return 0;
}
