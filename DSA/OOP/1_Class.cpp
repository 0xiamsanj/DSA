#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    char level;
    string name;


    public:

    //Parameterized constructor
    Hero(int level, int health, string name){
        cout<<"Constructor is called and values are stored"<<endl;
        this->level = level;
        this->health = health;
        this->name = name;
    }


    //Copy constructor
    Hero(Hero& temp){  
        cout<<"Copy constructor"<<endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = temp.name;
    }


    //Prints all the values present inside that particular object 
    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Level: "<<this->level<<endl;
    }
    void setLevel(int level){
        this->level = level;
    }

    void setHealth(int health){
        this->health = health;
    }

    void setName(string name){
        this->name = name;
    }

    ~Hero(){
        cout<<"Destructor is being called"<<endl;
    }

};

int main()
{

    Hero *b = new Hero(2,50,"Iron-Man");
    delete b;

    return 0;
}
