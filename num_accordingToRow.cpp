#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
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
