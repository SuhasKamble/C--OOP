#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;
};

int main()
{
    Employee employee1;
    employee1.Name = "Suhas";
    employee1.Company = "Google";
    employee1.Age = 21;

    cout << "Name: " << employee1.Name << endl;
    cout << "Company: " << employee1.Company << endl;
    cout << "Age: " << employee1.Age << endl;
    return 0;
}