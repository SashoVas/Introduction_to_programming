#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int fourth = num % 10;
    int first = num / 1000;
    num %= 1000;
    int second = num / 100;
    num %= 100;
    int third = num / 10;
    int combinedFirst = first * 10 + fourth;
    int combinedSecond = second * 10 + third;
    if (combinedFirst > combinedSecond) {
        cout << ">" << endl;
    }
    else if (combinedFirst < combinedSecond) {
        cout << "<" << endl;
    }
    else {
        cout << "=" << endl;
    }
}
