// Q47. Create a class Vehicle that contains the registration_number and count_of_vehicle as data members and methods to get or set data. From this class drive another class that contains type_of_vehicle (motorbike, car, truck, buses etc.), and no_of_passengers. Create methods to get and set data. Display the entire information of the vehicle along With the total number of vehicles which came into existence.

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    string registration_number;
    static int count_of_vehicle;

public:
    Vehicle()
    {
        registration_number = "";
        count_of_vehicle++;
    }

    void set_registration_number(string reg_num)
    {
        registration_number = reg_num;
    }

    string get_registration_number()
    {
        return registration_number;
    }

    static int get_count_of_vehicle()
    {
        return count_of_vehicle;
    }
};

int Vehicle::count_of_vehicle = 0;

class TypeOfVehicle : public Vehicle
{
protected:
    string type_of_vehicle;
    int no_of_passengers;

public:
    void set_type_of_vehicle(string type)
    {
        type_of_vehicle = type;
    }

    string get_type_of_vehicle()
    {
        return type_of_vehicle;
    }

    void set_no_of_passengers(int no)
    {
        no_of_passengers = no;
    }

    int get_no_of_passengers()
    {
        return no_of_passengers;
    }

    void display_info()
    {
        cout << "Registration Number: " << registration_number << endl;
        cout << "Type of Vehicle: " << type_of_vehicle << endl;
        cout << "No. of Passengers: " << no_of_passengers << endl;
        cout << "Total Vehicles: " << Vehicle::get_count_of_vehicle() << endl;
    }
};

int main()
{
    TypeOfVehicle vehicle1;
    vehicle1.set_registration_number("ABC123");
    vehicle1.set_type_of_vehicle("Car");
    vehicle1.set_no_of_passengers(4);
    vehicle1.display_info();

    cout << endl;

    TypeOfVehicle vehicle2;
    vehicle2.set_registration_number("XYZ456");
    vehicle2.set_type_of_vehicle("Truck");
    vehicle2.set_no_of_passengers(2);
    vehicle2.display_info();

    return 0;
}
