#include <iostream>
using namespace std;

int main() {
  int playerHealth = 100;
  int playerRange = 10;
  int input;
  bool isPlayerInRange, isPlayerAttacking, isPlayerDefending;
  cout << "Player Health: " <<endl; 
  cin >> playerHealth;
  cout << "Enter Range" << endl;
  cin >> playerRange;
  if (playerRange <= 10) 
  {
    isPlayerInRange = true;
  } 
  else 
  {
    isPlayerInRange = false;
  }
  cout << "Enter Attack(0 for false and 1 for true)" << endl;
  cin >> input;
  isPlayerAttacking = input;
  cout << "Is player defending?(0 for false and 1 for true)" << endl;
  cin >> input;
  isPlayerDefending = input;
  if (isPlayerInRange == true && isPlayerAttacking == false && isPlayerDefending == false) {
    cout << "the enemy should attack" << endl;
    playerHealth -= 10;
    cout << "Player Health: " << playerHealth << endl;
  }
  else if(isPlayerInRange == true && isPlayerAttacking == false && isPlayerDefending == true) 
  {
    cout<< "enemy should hold"<<endl;
    cout << "Player Health: " << playerHealth << endl;
  }
  else if(isPlayerInRange == true && playerHealth < 20 && isPlayerAttacking == true)
  {
    cout<<"Player should Rage attack"<<endl;  
  }
  else if(isPlayerInRange == true && isPlayerDefending == false && (playerHealth = 100 || playerHealth<100))
  {
    cout<<"enemy should do a special attack"<<endl;
  }
}