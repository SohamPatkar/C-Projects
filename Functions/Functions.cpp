#include <iostream>
using namespace std;

int health = 100;
float attack = 25;
int defense = 25;
float damage;
float multiplier = 2.5;
int healingPower = 15;

void DisplayStats();
void TakeDamage(float damageToInflict);
void Heal(int healthToRecover);
void DamageMultiplier(float multiplier);

int main()
{
    DisplayStats();
    cout<<"Enter Damage to take:"<<endl;
    cin >> damage;
    TakeDamage(damage);
    Heal(healingPower);
    DamageMultiplier(multiplier);
}

void DisplayStats()
{
    cout << "Player Health: "<<health<<endl;
    cout << "Player Attack: "<<attack<<endl;
    cout << "Player Defense: "<<defense<<endl;
    cout << "Player Healing Power: "<<healingPower<<endl;
}

void TakeDamage(float damageToInflict)
{
    health = health - damageToInflict;

    if(health < 0)
    {
        health = 0;
    }

    cout << "Player Health after Damage: "<<health<<endl;
}

void Heal(int healthToRecover)
{
    health = health + healthToRecover;

    if(health > 100)
    {
        health = 100;
    }

    cout << "Player Health after Healing: "<<health<<endl;
}

void DamageMultiplier(float multiplier)
{
    attack += multiplier;

    if(attack > 50)
    {
        attack = 50;
    }

    cout << "Player Attack after Multiplier:" << attack<<endl;
}


