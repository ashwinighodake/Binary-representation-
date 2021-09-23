/*
Accept number from user & display its binary representation
*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Binary_Rep
{
    public:
    void Display(unsigned int no)
    {
        int iDigit=0;

        while(no>0)
        {
            iDigit=no%2;
            cout<<iDigit<<"\t";
            no=no/2;
        }
    }
};
int main()
{
    Binary_Rep b;
    unsigned int no;
    cout<<"Enter the number:";
    cin>>no;

    b.Display(no);

    return 0;
}