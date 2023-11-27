#include <iostream>
using namespace std;
#include <string>

// global variable
string source, destination;
int option;
string name, date;
int age, ticket, price = 250, total;

class Bus_Reservation
{
public:
    // constructor print welcome to redbus
    Bus_Reservation()
    {
        cout << "Welcome To RedBus" << endl;
    }

    // menu function input source and destination by user
    void Menu()
    {
        cout << "Enter source:";
        cin >> source;
        cout << "Enter Destination:";
        cin >> destination;
        cout << source << " to ";
        cout << destination << endl;
    }

    // bus list funtion
    void BusList()
    {
        cout << "NueGo 1:30PM"
             << " Press 1" << endl;
        cout << "Chartered Bus 8:00PM"
             << " Press 2" << endl;
        cout << "MBBS Bus 8:15PM"
             << " Press 3" << endl;
        cout << "SMT Travels 5:30PM"
             << " Press 4" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "NueGo 1:30PM" << endl;
            break;
        case 2:
            cout << "Chartered Bus 8:00PM" << endl;
            break;
        case 3:
            cout << "MBBS Bus 8:15PM" << endl;
            break;
        case 4:
            cout << "SMT Travels 5:30PM" << endl;
            break;
        }
    }

    // Take passanger details function
    void Passenger_Details()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your Age: " << endl;
        cin >> age;
        cout << "Enter date of journey: " << endl;
        cin >> date;
        cout << "How much ticket you want:" << endl;
        cin >> ticket;
    }

    // calculate ticket price default ticket price is 250
    int fare_calc()
    {
        return total = price * ticket;
    }

    // display passanger detail and ticket price
    void Display()
    {
        cout << "\n";
        cout << "Date of journey: " << date << endl;
        cout << "\n";
        cout << "Name of passenger is :" << name << "\t"
             << "\t \t \t \t  Age of passenger is : " << age << endl;
        cout << "\n";
        cout << "Source of  pasanger is: " << source << "\t"
             << "\t \t \t  Destination of passenger is:" << destination << endl;
        cout << "\n";
        cout << "Number of ticket is: " << ticket << "\t"
             << "\t \t \t  Total fair of tickets is: " << total << endl;
        cout << endl;
    }
};

int main()
{
    Bus_Reservation b; // object of Bus_Reservation class
    b.Menu();
    cout << endl;
    b.BusList();
    b.Passenger_Details();
    b.fare_calc();
    b.Display();

    return 0;
}