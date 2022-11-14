#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    // Constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // Class Method
    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        ;
        cout << "Age: " << Age << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Suhas", "Google", 20);
    employee1.IntroduceYourself();
    employee1.Name = "Suhas Kamble";
    employee1.Age = 21;
    employee1.IntroduceYourself();
    return 0;
}