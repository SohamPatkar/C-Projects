#include <iostream>
using namespace std;

int counter = 0;

void shooting();
void healing();
void attacking();

int main()
{
    for (int i = 0; i<10; i++)
    {
        shooting();
    }
    while(counter < 5)
    {
        healing();
        counter++;
    }
    if(counter == 5)
    {
        counter = 0;
    }
    do
    {
        attacking();
        counter++;
    }while(counter < 7);
}

void shooting()
{
    cout<<"player is Shooting!"<<endl;
}

void healing()
{
    cout<<"player is Healing..."<<endl;
}

void attacking()
{
    cout<<"player is Attacking!!!"<<endl;
}