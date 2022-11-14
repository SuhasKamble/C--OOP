#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
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

    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted!" << endl;
        }
        else
        {
            cout << Name << ", No got promotion!" << endl;
        }
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
    Employee employee1 = Employee("Suhas", "Google", 34);
    employee1.IntroduceYourself();
    employee1.AskForPromotion();
    return 0;
}