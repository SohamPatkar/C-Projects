#include <iostream>
using namespace std;

int sum = 0;
void SumofNumbers();

int main()
{
    SumofNumbers();
}

void SumofNumbers()
{
    for (int i = 1; i<=10;i++)
    {
        sum = sum + i;        
    }
    cout<<"Sum of first ten numbers: "<<sum<<endl;
}

