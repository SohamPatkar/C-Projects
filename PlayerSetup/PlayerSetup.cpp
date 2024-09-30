#include <iostream>
using namespace std;

int main() 
{
  int playerhealth = 100;
  int LivesCount = 3;
  double playerId = 12345;
  float WinPercentage = 2.5;
  bool playerWon = false;
  char TypeofPlayer;
  cout << "Enter Player Type:"<<endl;
  cin >> TypeofPlayer;
  cout << "---- Player Stats ---- \n";
  cout << "Health: " << playerhealth << endl;
  cout << "Lives: " << LivesCount << endl;
  cout << "Player ID: " << playerId << endl;
  cout << "Win Percentage: " << WinPercentage << endl;
  cout << "Has player won?: " << playerWon << endl;
  cout << "Player Type: "<<TypeofPlayer<<endl;
}