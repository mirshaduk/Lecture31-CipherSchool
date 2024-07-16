#include<iostream>
using namespace std;
//the vhicle is a base class

class vhicle
{ 
    public:

    int number_tyres;
    string name;
    int captivity;
    int milage;

    public:

    void calculatemilage()
    {
        cout<<"The milage is"<<milage;
    }

};
//now i will inherit the features of base class into derived classs

class schoolBus: public vhicle
{
    

    string school_name;

    int number_holidays;

    public:

    
    void printnameofschool()
    {
        cout<<"The name of the school is"<<name;
    }
};
class car :public vhicle //deived calss has inherited all data from the base class vhicle
{
    //no member named milage
    //no memberfunction named calculate milage
    private:

    int number_airbags;
    int ac_consumption;



};
int main()
{
    car a;
    a.name;
    

}