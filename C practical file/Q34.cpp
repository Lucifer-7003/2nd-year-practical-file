// Q34. Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.

#include <iostream>
using namespace std;

class Average
{
    int num1, num2, num3;

public:
    void getData(int num1, int num2, int num3)
    {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }

    int showData()
    {
        int avg = (num1 + num2 + num3) / 3;
        return avg;
    }
};

int main()
{
    int num1, num2, num3;
    cout << "Enter 3 number : ";
    cin >> num1 >> num2 >> num3;
    Average avg;
    avg.getData(num1, num2, num3);
    cout << "Average of 3 numbers : " << avg.showData() << endl;
    return 0;
}