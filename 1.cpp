#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string str[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int n;
    cout << "¬ведите число: ";
    cin >> n;
    for (int i = 0; i < 13; ++i)
    {
        while(n - value[i] >= 0)
        {
            n -= value[i];
            cout << str[i];
       }
    }
    return 0;
}
