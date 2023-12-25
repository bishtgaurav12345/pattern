#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i=0;i<5;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<"* ";
        }
        cout <<endl;
    }
}
int main(){
   int n;
   cout<<"enter the number for pattern"<<endl;
   cin>>n;
   print(n);
}
