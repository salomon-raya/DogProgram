// SrayaDogPrrogram.cpp :
// 1/21/2026
// salomon raya
// This program will use a class named dog and set the name, age, and breed usiing setters and getters, then It will modify one atribute. 


#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    // Setter functions
    void setName(string dogName)
    {
        name = dogName;
    }

    void setAge(int dogAge)
    {
        age = dogAge;
    }

    void setBreed(string dogBreed)
    {
        breed = dogBreed;
    }

    // Getter functions
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getBreed()
    {
        return breed;
    }

    void bark()
    {
        cout << "Woof! Woof!" << endl;
    }

private:
    string name;
    int age;
    string breed;
};

int main() 
{
    Dog myDog;

    myDog.setName("Ralph");
    myDog.setAge(6);
    myDog.setBreed("Dashound");

    cout << "Dog's Name: " << myDog.getName() << endl;
    cout << "Dog's Age: " << myDog.getAge() << endl;
    cout << "Dog's Breed: " << myDog.getBreed() << endl;

    // Modify attribute
    myDog.setAge(7);
    cout << endl;
    cout << "Dog's New Age: " << myDog.getAge() << endl;
    myDog.bark();
}
