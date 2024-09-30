#include <iostream>
using namespace std;

int length;
int sum = 0;
void SumofNumbers();

int main()
{
    SumofNumbers();
}

void SumofNumbers()
{
    cout <<"Enter the length:"<<endl;
    cin >>length;
    for (int i = 1; i<=length;i++)
    {
        sum = sum + i;        
    }
    cout<<"Sum of first "<<length<<" natural numbers: "<<sum<<endl;
}

