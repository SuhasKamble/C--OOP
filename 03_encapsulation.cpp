#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
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

    // Encapsulation (Getters/Setters)
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
};

int main()
{
    Employee employee1 = Employee("Suhas", "Google", 20);
    employee1.IntroduceYourself();

    employee1.setName("Suhas Kamble");
    employee1.setAge(21);

    cout << "Name: " << employee1.getName() << endl;
    cout << "Age: " << employee1.getAge() << endl;

    return 0;
}