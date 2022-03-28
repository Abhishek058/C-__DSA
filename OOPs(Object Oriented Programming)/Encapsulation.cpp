#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int rollNo;
    int marks;

public:
    int getRoll(){
        return this->rollNo;
    }
};

int main()
{
    student first;
    return 0;
}