#include <iostream>
using namespace std;
struct Person {
    string name;
    string phone;
};

int main() {
    Person* people = new Person[2];
    for (int i = 0; i < 2; i++) 
    {
        cout << "Enter name : ";
        cin >> people[i].name;

        cout << "Enter number of phone : ";
        cin >> people[i].phone;
    }
    string name;
    cout << "Enter name for searchg : ";
    cin >> name;
    bool found = false;
    for (int i = 0; i < 2; i++) 
    {
        if (people[i].name == name) 
        {
            cout << "Name : " << people[i].name << endl;
            cout << "Telephone : " << people[i].phone << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "People with this name not found!" << endl;
    }
    string phone;
    cout << "Enter number for search : ";
    cin >> phone;
    found = false;
    for (int i = 0; i < 2; i++) 
    {
        if (people[i].phone == phone) {
            cout << "Name : " << people[i].name << endl;
            cout << "Telephon : " << people[i].phone << endl;
            found = true;
            break;
        }
    }

    if (!found) 
    {
        cout << "Людина з таким номером телефону не знайдена!" << endl;
    }
}