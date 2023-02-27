#include <iostream>
using namespace std;

class Operator
{
public:
    int add(int a, int b);
};

int Operator::add(int a, int b)
{
    return a + b;
}

int main()
{
    Operator opr;
    int a, b, c;
    cout << "Enter 2 number : ";
    cin >> a >> b;
    cout << "Addition : " << opr.add(a, b) << endl;
    return 0;
}