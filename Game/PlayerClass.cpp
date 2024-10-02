#include<iostream>
using namespace std;

class Player
{
    private:
    int health = 100;

    int minDamage = 8;
    int maxDamage = 15;

    int damage,heal;

    int minHeal = 10;
    int maxHeal = 15;

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
        health = health - damage;
        if(health < 0)
        {
            cout<<"Player has died!"<<endl;
            cout<<"Micah: Slowpoke you got served!"<<endl;
        }
        else
        {
            cout<<"Player has taken "<<damage<<" damage"<<endl;
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

    int minDamage = 10;
    int maxDamage = 12;

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
        srand(time(0));
        damage = minDamage + (rand() % (maxDamage - minDamage + 1));
        return damage;
    }

    void TakeDamage(int damage)
    {
        health = health - damage;
        if(health < 0)
        {
            cout<<"Micah has died!"<<endl;
            cout<<"Arthur: You rat! "<<endl;
        }
        else
        {
            cout<<"Micah has taken "<<damage<<" damage"<<endl;
        }
    }
};

void GameLoop(Player _player, Enemy _enemy)
{
    string playerChoice;
    do{
        cout<<"Player Health:"<<_player.GetHealth()<<endl;
        cout<<"Enemy Health:"<<_enemy.GetHealth()<<endl;
        cout<<"Press A to attack or H to heal..."<<endl;
        cin >> playerChoice;
        if(playerChoice == "A" || playerChoice == "a")
        {
            _enemy.TakeDamage(_player.GiveDamage());
            if(_enemy.GetHealth() > 0 && _player.GetHealth() > 0)
            {
                _player.TakeDamage(_enemy.GiveDamage());
            }
        }
        else if(playerChoice == "H" || playerChoice == "h")
        {
            _player.Heal();
            if(_enemy.GetHealth() > 0 && _player.GetHealth() > 0)
            {
                _player.TakeDamage(_enemy.GiveDamage());
            }
        }
        else
        {
            cout<<"Invalid input!"<<endl;
        }
    }while(_enemy.GetHealth() > 0 && _player.GetHealth() > 0);
}

int main()
{
    string input;
    cout<<endl;
    cout<<"To Start The game press S"<<endl;
    cin >> input;

    if(input == "s" || input == "S")
    {
        Player _playerobj;
        Enemy _enemyobj;
        GameLoop(_playerobj, _enemyobj);
    }
    else
    {
        cout<<"Thank you for playing the game"<<endl;
    }
}

