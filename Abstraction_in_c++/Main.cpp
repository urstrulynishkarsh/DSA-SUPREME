#include <iostream>
#include "subject.h"
using namespace std;

void marksOfNishkarsh(Subject *&subject)
{
    subject->Automata();
    subject->Distributed();
    subject->DataScience();
    subject->IPR();
    subject->Embedded();
    subject->MachineLearningII();
}
void marksOfRitik(Subject *&subject)
{
    subject->Automata();
    subject->Distributed();
    subject->DataScience();
    subject->IPR();
    subject->Embedded();
    subject->MachineLearningII();
}
void marksOfPintu(Subject *&subject)
{
    subject->Automata();
    subject->Distributed();
    subject->DataScience();
    subject->IPR();
    subject->Embedded();
    subject->MachineLearningII();
}
void marksOfPiyush(Subject *&subject)
{
    subject->Automata();
    subject->Distributed();
    subject->DataScience();
    subject->IPR();
    subject->Embedded();
    subject->MachineLearningII();
}
void marksOfNitya(Subject *&subject)
{
    subject->Automata();
    subject->Distributed();
    subject->DataScience();
    subject->IPR();
    subject->Embedded();
    subject->MachineLearningII();
}

int main()
{
    Subject *person1 = new Nishkarsh();
    cout << "MARKS OF NISHKARSH: " << endl;
    marksOfNishkarsh(person1);
    cout << endl;
    Subject *person2 = new Pintu();
    cout << "MARKS OF PINTU: " << endl;
    marksOfPintu(person2);
    cout << endl;
    Subject *person3 = new Pintu();
    cout << "MARKS OF RITIK: " << endl;
    marksOfRitik(person3);
    cout << endl;
    Subject *person4 = new Pintu();
    cout << "MARKS OF NITYA: " << endl;
    marksOfNitya(person4);
    cout << endl;
    Subject *person5 = new Pintu();
    cout << "MARKS OF PIYUSH: " << endl;
    marksOfPiyush(person5);
    cout << endl;
}