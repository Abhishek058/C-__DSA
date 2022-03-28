#include <iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    char level;

    static int timeToComplete;

    void print()
    {
        cout << level << " " << health << endl;
    }

    // Default constructor
    hero()
    {
        cout << "default constructor" << endl;
    }

    // Parameterised constructor
    hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Copy constructor
    hero(hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    int setHealth(int h)
    {
        health = h;
    }
    char setLevel(char l)
    {
        level = l;
    }

    static int statfunc(){      //this function can access only static value
        return timeToComplete;
    }

    ~hero()
    {
        cout << "distructor called" << endl;
    }
};

int hero::timeToComplete = 5;

int main()
{
    /************************** Part - 1 ************************/

    /*
    // object creation
    hero h1; // if class is empty it provides you 1 byte for identification

    // setting private element using setter function
    h1.setHealth(78);

    // setting public element
    h1.level = 'A';

    // output of private element using getter function
    cout << "health : " << h1.getHealth() << endl;

    // output of public element
    cout << "level  : " << h1.level << endl;
    cout << "size : " << sizeof(h1) << endl;*/

    /*************************** part - 2 ************************/
    /*
    hero h2(63);
    cout << "Address of  h2 : " << &h2 << endl;
    h2.print();

    // dynamically
    hero *h = new hero(42);


    hero h3(34, 'B');
    h3.print();
    */

    /*************************** part - 3 ************************/
    /*
    hero h4(75, 'C');
    cout<<"h4 properties : ";
    h4.print();
    //Copy Constructor
    hero h5(h4);
    cout<<"h5 properties : ";
    h5.print();
    */

    /*************************** part - 4 ************************/

    /*
    hero h6;         //for static destructor automatcally called

    hero *h7 = new hero();
    delete h7;       //Destructor called manually
    */

    /*************************** part - 5 ************************/

    /*
    cout << hero::timeToComplete << endl;
    hero h8;

    hero h9;
    h9.timeToComplete = 10;
    cout << h8.timeToComplete << endl;
    cout << h9.timeToComplete << endl;
    */

    /*************************** part - 6 ************************/

    cout<<hero::statfunc()<<endl;
    return 0;
}