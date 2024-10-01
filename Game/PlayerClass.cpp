#include<iostream>
using namespace std;

class Player
{
    private:
    int health;

    int minDamage = 8;
    int maxDamage = 15;

    int minHeal = 5;
    int maxHeal = 10;

    public:
    Player()
    {
        cout<<endl;
    }

    void PlayerIntro()
    {
        cout<<"------- Player Introduction -------"<<endl;
        cout<<"Arthur ShotGun... I just dont have a shotgun"<<endl;
        cout<<"But... I have a revolver!"<<endl;
        cout<<"My damage varies from "<<minDamage<<" to "<<maxDamage<<endl;
        cout<<"I also can heal... with these bandages which will vary from "<<minHeal<<" to "<<maxHeal<<endl;
    }
};

int main()
{
    Player _playerobj;
    _playerobj.PlayerIntro();
}