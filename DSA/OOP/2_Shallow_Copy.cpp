#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int level;
   

    public:
     char * name;


     Hero()
     {
        name = new char[100];
     }


    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        cout<<"Copy constructor is called"<<endl;
        //Deep copying of the data members
        strcpy(ch,name);
        this->level = temp.level;
    } 
};


int main()
{
    return 0;
}