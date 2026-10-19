// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int shell_game(vector<bool> cups, const vector<vector<int>> &lines)
{
    int correct_guesses = 0;
    for (vector<int> line : lines)
    {
        int a = line[0];
        int b = line[1];
        int g = line[2];

        if (cups[a - 1] || cups[b - 1])
        {
            cups[a - 1] = !cups[a - 1];
            cups[b - 1] = !cups[b - 1];
        }

        if (cups[g - 1])
        {
            correct_guesses += 1;
        }
    }
    return correct_guesses;
}

int main()
{
    int n = 0;
    int a, b, g;
    vector<vector<int>> lines;

    cin >> n;

    while (cin >> a >> b >> g)
    {
        lines.push_back({a, b, g});
    }
    // cout<<shell_game({false,false,true}, lines)<<endl;
    // cout<<shell_game({false,true,false}, lines)<<endl;
    // cout<<shell_game({true,false,false}, lines)<<endl;

    cout << max({shell_game({false, false, true}, lines), shell_game({false, true, false}, lines), shell_game({true, false, false}, lines)});
    return 0;
}