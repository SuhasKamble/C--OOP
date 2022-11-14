#include <iostream>
using namespace std;

class Employee
{
private:
    string Company;
    int Age;

protected:
    string Name;

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

class Developer : public Employee
{
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug()
    {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }

    void PrepareLesseon()
    {
        cout << Name << " preparing lesson of " << Subject << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Suhas", "Google", 20);
    employee1.IntroduceYourself();

    Developer developer = Developer("Abc", "Xyz", 20, "Python");
    developer.FixBug();
    developer.IntroduceYourself();

    Teacher teacher = Teacher("OOP", "YT", 20, "C++");
    teacher.PrepareLesseon();
    teacher.IntroduceYourself();

    return 0;
}