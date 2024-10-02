#include<iostream>
using namespace std;

class Player
{
    private:
    int health = 100;

    int minDamage = 8;
    int maxDamage = 15;

    int damage,heal;

    int minHeal = 5;
    int maxHeal = 10;

    public:
    Player()
    {
        PlayerIntro();
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
        srand(time(0));
        damage = minDamage + (rand() % (maxDamage - minDamage + 1));
        cout<<"You dealt a damage of: "<<damage<<endl;
        return damage;
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
        srand(time(0));
        heal = minHeal + (rand() % (maxHeal - minHeal + 1));
        if(health < 100)
        {
            health = health + heal;
            cout<< "Wow thanks for the bandages!"<<endl;
        }
    }
};

class Enemy
{
    private:
    int health = 100;

    int damage = 10;

    public:
    Enemy()
    {
        EnemyIntro();
    }

    void EnemyIntro()
    {
        cout<<endl;
        cout<<"------- Enemy Introduction -------"<<endl;
        cout<<"Remember me... if you have forgotten it's me Micah."<<endl;
        cout<<"Slowpoke, you still look weak!"<<endl;
        cout<<"I will show you what a Slowpoke like you gets for such a stupid introduction..."<<endl;
    }

    int GetHealth()
    {
        return health;
    }

    int GiveDamage()
    {
        cout<<"You dealt a damage of: "<<damage<<endl;
        return damage;
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

};

int main()
{
    string input;
    cout<<endl;
    cout<<"To Start The game press S";
    cin >> input;

    if(input == "s" || input == "S")
    {
        Player _playerobj;
        Enemy _enemyobj;
    }
    else
    {
        cout<<"Thank you for playing the game"<<endl;;
    }
}