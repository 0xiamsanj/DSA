#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }

    void setWeight(int weight){
        this->weight = weight;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};


int main()
{
    return 0;
}