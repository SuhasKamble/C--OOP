#include <iostream>
using namespace std;

// Abstract class
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // class method
    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
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
            cout << Name << " No got promotion" << endl;
        }
    }

    virtual void Work()
    {
        cout << Name << " is preparing lesson, perfoming tasks" << endl;
    }

    // Getters And Setters (Encapsulation)
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

    int setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }
};

// Inheritance

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
    void Work()
    {
        cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
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

    void PrepareLesson()
    {
        cout << Name << " prepeared lesson for " << Subject << endl;
    }

    void Work()
    {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Suhas", "Google", 31);
    employee1.IntroduceYourself();
    employee1.AskForPromotion();

    Developer developer = Developer("Kishan", "Apple", 21, "Python");
    developer.IntroduceYourself();

    Teacher teacher = Teacher("Spring", "Red", 40, "Maths");
    teacher.IntroduceYourself();
    teacher.PrepareLesson();

    // Polymorphism
    employee1.Work();
    developer.Work();
    teacher.Work();

    return 0;
}