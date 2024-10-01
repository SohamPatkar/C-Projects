#include <iostream>
using namespace std;

class Player{
    public:
    int health;
    float attack_power;

    Player(int health, float attack_power)
    {
        cout<<"Health is: "<<health<<endl;
        cout<<"Attack Power is: "<<attack_power<<endl;
    }
};

void GameStory()
{
    cout<<"This is the story of a Cowboy"<<endl;
    cout<<"He was wandering the desert"<<endl;
    cout<<"Suddenly he is confronted by an old enemy"<<endl;
    cout<<"An enemy with the name Dutch..."<<endl;
    cout<<"Good to see you Old man... said the Cowboy"<<endl;
}

int main()
{
    GameStory();
    Player _player(20,2.5);
    return 0; 
}
