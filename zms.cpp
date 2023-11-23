#include<iostream>
#include <string>
using namespace std;

class animal{
    // create variables
    string name;     
    int age;
    string sound;
    
    // public method for set and get details of private variables this is called encapsulation.
    public:

    // set values     
    void set_details(string name,int age){
        this -> name=name;
        this -> age=age; 
    }

    // print values 
    void get_details(){
        cout<<"Name of Animal is: "<<name<<endl;
        cout<<"Age of animalis is: "<<age<<endl;
    }

    // set sound 
    void set_sound(string sound){
        this -> sound=sound;
    }

    // print sound
    void get_sound(){
        cout<<"Sound of animal is: "<<sound<<endl;
    }
};

// create mammal class
class mammal:public animal{
    public:
    string col;
    void colour(string col){
        cout<<"colour of animal is:"<<col<<endl;
    }
};

// create bird class
class bird:public animal{
    public:
    string col;
    void feather_color(string col){
        cout<<"colour of animal is: "<<col<<endl;
    }
};

int main()
{
    // create object of mammal class
    mammal m;
    m.set_details("mammals",20);
    m.get_details();
    m.set_sound("me me me");
    m.get_sound();
    m.colour("black");

    cout<<"\n";
    // create object of bird class
    bird b;
    b.set_details("sparrow",10);
    b.get_details();
    b.set_sound("chi chi chi");
    b.get_sound();
    b.feather_color("white");
    return 0;
}