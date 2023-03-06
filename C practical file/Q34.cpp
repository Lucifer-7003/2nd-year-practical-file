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

    // Prompt user to input three numbers
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    // Create an instance of the Average class
    Average avg;

    // Call the getData function to set the data for the instance
    avg.getData(num1, num2, num3);

    // Display the average of the three numbers
    cout << "Average of 3 numbers: " << avg.showData() << endl;

    return 0;
}
