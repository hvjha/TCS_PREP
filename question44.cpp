#include <bits/stdc++.h>
using namespace std;

int main()
{
    string keys, numbers;
    getline(cin, keys);
    getline(cin, numbers);

    vector<int> encrypted;
    stringstream ss(numbers);
    int x;

    while (ss >> x)
    {
        encrypted.push_back(x);
    }
    for (char k : keys)
    {
        char UpperK = toupper(k);
        int key = UpperK - 'A' + 1;
        bool valid = true;

        vector<int> decrypted;
        for (int num : encrypted)
        {
            int value = num - key;
            if (value < 1 || value > 26)
            {
                valid = false;
                break;
            }
            decrypted.push_back(value);
        }
        if (valid)
        {
            for (int v : decrypted)
            {
                char letter = 'A' + v - 1;
                cout << letter << " ";
            }
            break;
        }
    }
    return 0;
}