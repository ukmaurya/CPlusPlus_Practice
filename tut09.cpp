#include <iostream>

using namespace std;

int main()
{
    /*********** SELECTION CONTROL STRUCTURE : if else-if else-if else ladder**********/
    int age;
    cout << "Tell me your age (in YEARS) : " << endl;
    cin >> age;

    if (age < 1)
    {
        cout << "YOU ARE NOT YET BORN IDIOT." << endl;
    }

    else if ((age < 18) && (age > 0))
    {
        cout << "Sorry, Minors are NOT allowed in the party." << endl;
    }

    else if (age == 18)
    {
        cout << "You are a KID and you will get KID-PASS to the party." << endl;
    }

    else
    {
        cout << "You can come to the party." << endl;
    }

    /*********** SELECTION CONTROL STRUCTURE : switch case statements**********/

    switch (age)
    {
    case 60:
        cout << "But you are much older for our party." << endl;
        break;
    case 35:
        cout << "You may come but don't spoil anything." << endl;
        break;
    case 70:
        cout << "but you may not be able to dance dear." << endl;
        break;

    default:
        cout << "No special cases." << endl;
        break;
    }

    return 0;
}