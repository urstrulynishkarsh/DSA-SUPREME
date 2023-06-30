#include <iostream>
using namespace std;

class student
{
private:
    int weight;

public:
    // properties
    string name;
    int age;

    // behaviors
    void sleep()
    {
        cout << "he is sleeping" << endl;
    }
    void eat()
    {
        cout << "he  is eating mangos ";
    }

    // if we dont make constructor then it will make a default constructor function
    // constructor
    student()
    {
        this->age = 0;
        this->name = "";
        this->weight = 0;
        cout << "Hello ji i am usig constructor" << endl;
    }

    student(int age)
    {
        this->age = age;
        cout << "Hello ji i am using parametarized constructor" << endl;
    }

    int getweight()
    {
        return weight;
    }
    // int setweight(int w)
    // {
    //     weight = w;
    // }
    int setweight(int weight)
    {
        this->weight = weight;
    }
};

int main()
{
    // static object
    //     student nishkarsh;
    //     nishkarsh.name = "verma";
    //     cout << nishkarsh.name << endl;
    //     cout << nishkarsh.age << endl; // it will give garbage value
    //     nishkarsh.age = 15;
    //     cout << nishkarsh.age << endl;
    //     nishkarsh.sleep();
    //     nishkarsh.eat();
    //     nishkarsh.setweight(70);
    //     cout << endl;
    //     // nishkarsh.weight = 15;
    //     // cout << "weight is: " << nishkarsh.weight;
    //     cout << nishkarsh.getweight();
    //

    // dynamic memory allocation

    student *nishkarsh = new student(100);

    nishkarsh->age = 70;
    cout << "age is :" << nishkarsh->age;
    nishkarsh->setweight(80);
    cout << endl;
    cout << nishkarsh->getweight();
    cout << endl;
    // delete nishkarsh;
    nishkarsh->name = "verma";
    cout << nishkarsh->name;
}