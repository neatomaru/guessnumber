#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    vector<int> numbers;
    int index;
    int guess;
    char var;

    for (int i = 1; i <= 100; ++i) {
        numbers.push_back(i);
    }



    for(int i = 0; i < 8; ++i) {
        if (numbers.size() % 2 != 0) {
            guess = numbers[numbers.size() / 2];
            index = numbers.size() / 2;

        } else {
            index = numbers.size() / 2 - 1;
            guess = numbers[numbers.size() / 2 - 1];

        }
        cout << "\nЧисло " << guess << " больше загаданного?\n";
        cin >> var;

        if(var == 'y')
        {
           numbers.erase(numbers.begin() + index, numbers.end());
        }


        else if (var == 'n')
        {
            numbers.erase(numbers.begin(), numbers.begin() + index);
        }

        else if(var == '=')
        {
            break;
        }


    }

    cout << "\nЗагаданное число - " << guess;
    cout << '\n';

    for (int x : numbers) {
        cout << x << " ";
    }


}