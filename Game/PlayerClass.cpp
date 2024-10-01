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
        
    }

    void PlayerIntro()
    {
        cout<<endl;
        cout<<"------- Player Introduction -------"<<endl;
        cout<<"Arthur ShotGun... I just dont have a shotgun"<<endl;
        cout<<"But... I have a revolver!"<<endl;
        cout<<"My gun's damage varies from "<<minDamage<<" to "<<maxDamage<<" as sometimes my gun loses it efficiency"<<endl;
        cout<<"I also can heal... with these bandages which will vary from "<<minHeal<<" to "<<maxHeal<<endl;
    }

    int GetHealth()
    {
        return health;
    }

    int GiveDamage()
    {
        return 0;
    }

    void TakeDamage(int damage)
    {
        if(health > 0)
        {
            cout<<"Player has taken "<<damage<<" damage"<<endl;
            health = health - damage;
        }
        else
        {
            cout<<"Player has died!"<<endl;
        }
    }

    void Heal()
    {

    }
};

int main()
{
    Player _playerobj;
    _playerobj.PlayerIntro();
}