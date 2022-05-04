#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    //1st way of insertion
    pair<string, int> p = make_pair("abhishek", 3);
    m.insert(p);

    //2nd way of insertion
    pair<string, int> pair2("is", 2);
    m.insert(pair2);

    //3rd way of insertion
    m["my"] = 1; //initialization
    m["my"] = 2; //updation

    //Search
    cout<<m["my"]<<endl;
    cout<<m.at("abhishek")<<endl;
    cout<<m.at("name")<<endl;   //key not found error

    return 0;
}