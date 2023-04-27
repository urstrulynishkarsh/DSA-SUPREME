#if !defined(SUBJECT_H)
#define SUBJECT_H
#include <iostream>
using namespace std;

class Subject
{
public:
    // now we are creating pure virtual function with using virtual keyword class at least contain one virtual Function
    virtual void Automata() = 0;
    virtual void Distributed() = 0;
    virtual void MachineLearningII() = 0;
    virtual void IPR() = 0;
    virtual void Embedded() = 0;
    virtual void DataScience() = 0;
};

class Nishkarsh : public Subject
{
public:
    void Automata()
    {
        cout << "Marks of Automata is 90" << endl;
    }
    void Distributed()
    {
        cout << "Marks of Distributed is 89" << endl;
    }
    void MachineLearningII()
    {
        cout << "Marks of MachineLearningII is 90" << endl;
    }
    void IPR()
    {
        cout << "Marks of IPR is 89" << endl;
    }
    void Embedded()
    {
        cout << "Marks of Embedded is 90" << endl;
    }
    void DataScience()
    {
        cout << "Marks of DataScience is 89" << endl;
    }
};

class Pintu : public Subject
{
public:
    void Automata()
    {
        cout << "Marks of Automata is 91" << endl;
    }
    void Distributed()
    {
        cout << "Marks of Distributed is 90" << endl;
    }
    void MachineLearningII()
    {
        cout << "Marks of MachineLearningII is 93" << endl;
    }
    void IPR()
    {
        cout << "Marks of IPR is 84" << endl;
    }
    void Embedded()
    {
        cout << "Marks of Embedded is 95" << endl;
    }
    void DataScience()
    {
        cout << "Marks of DataScience is 99" << endl;
    }
};
class Nitya : public Subject
{
public:
    void Automata()
    {
        cout << "Marks of Automata is 91" << endl;
    }
    void Distributed()
    {
        cout << "Marks of Distributed is 90" << endl;
    }
    void MachineLearningII()
    {
        cout << "Marks of MachineLearningII is 93" << endl;
    }
    void IPR()
    {
        cout << "Marks of IPR is 84" << endl;
    }
    void Embedded()
    {
        cout << "Marks of Embedded is 95" << endl;
    }
    void DataScience()
    {
        cout << "Marks of DataScience is 99" << endl;
    }
};
class Ritik : public Subject
{
public:
    void Automata()
    {
        cout << "Marks of Automata is 91" << endl;
    }
    void Distributed()
    {
        cout << "Marks of Distributed is 90" << endl;
    }
    void MachineLearningII()
    {
        cout << "Marks of MachineLearningII is 93" << endl;
    }
    void IPR()
    {
        cout << "Marks of IPR is 84" << endl;
    }
    void Embedded()
    {
        cout << "Marks of Embedded is 95" << endl;
    }
    void DataScience()
    {
        cout << "Marks of DataScience is 99" << endl;
    }
};
class Piyush : public Subject
{
public:
    void Automata()
    {
        cout << "Marks of Automata is 90" << endl;
    }
    void Distributed()
    {
        cout << "Marks of Distributed is 89" << endl;
    }
    void MachineLearningII()
    {
        cout << "Marks of MachineLearningII is 90" << endl;
    }
    void IPR()
    {
        cout << "Marks of IPR is 89" << endl;
    }
    void Embedded()
    {
        cout << "Marks of Embedded is 90" << endl;
    }
    void DataScience()
    {
        cout << "Marks of DataScience is 89" << endl;
    }
};
#endif
