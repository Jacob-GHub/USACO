// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M, N, K;
    cin >> M >> N >> K;
    cin.ignore();

    for (int i = 0; i < M; ++i)
    {
        string line;
        string amplified_line = "";

        getline(cin, line);
        for (char signal : line)
        {
            amplified_line += string(K, signal);
        }
        for (int i = 0; i < K; ++i)
        {
            cout << amplified_line << endl;
        }
    }
}