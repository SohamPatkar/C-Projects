#include <iostream>
using namespace std;

int main() {
  int playerHealth;
  int enemyHealth;
  int maxPlayerHealth = 150;
  cout<<"Enter Player Health -";
  cin >> playerHealth;
  cout<<"Enter Enemy Health -";
  cin >> enemyHealth;
  // if else statements
  if(playerHealth == enemyHealth)
  {
    cout<<"Stats are the same"<<endl;
  }
  else if(playerHealth < enemyHealth)
  {
    cout<<"Enemy health is more"<<endl;
  }
  else if(playerHealth > enemyHealth)
  {
    cout<<"Player health is more"<<endl;
  }
  //if else chained
  if(playerHealth == maxPlayerHealth)
  {
    if(playerHealth == 75)
    {
      cout<<"Player health is half"<<endl;
    }
    else if(playerHealth <= 0)
    {
      cout<<"Player is dead"<<endl;
    }
  }
  //Checking the player health
  if(playerHealth > 0)
  {
    if(playerHealth == maxPlayerHealth)
    {
      cout<<"Player health is full"<<endl;  
    }  
    else if(playerHealth == 75)
    {
      cout<<"Player health is half"<<endl;
    }
    else if(playerHealth <= 0)
    {
      cout<<"Player is dead"<<endl;
    }
  }

  (playerHealth == 0) ? (enemyHealth == 0)?cout<<"Game Draw":cout<<"Enemy Won":(enemyHealth == 0)?cout<<"Player Won!":cout<<"Game is continuing!";
}
