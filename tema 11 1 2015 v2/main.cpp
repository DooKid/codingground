#include <iostream>

using namespace std;

int main()
{int a,c,x,d,y;
cout<<"X=";
cin>>x;
a=x;
if (a>0) {
     for (y=0; y<x; y=y+1)
         {
         c=(y*y)%a;
         cout<<"pentru x= "<<y<<" solutia este= "<<c<<endl;
         }
}
else cout<<"nu ai cum, boule!"<<endl;
   
}