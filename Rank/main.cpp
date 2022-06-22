//Eman Helal
#include <iostream>

using namespace std;

int main()
{ float x;
float r;
cout<<"plz enter x: ";
cin>>x;
if(x>=0&&x<40)
{  r=40-x;
    cout<<"you need to reach to the next rank : "<<r<<endl;
}
else if(x>=40&&x<70)
{  r=70-x;
    cout<<"you need to reach to the next rank : "<<r<<endl;
}
else if(x>=70&&x<90)
{  r=90-x;
    cout<<"you need to reach to the next rank : "<<r<<endl;
}
else if(x>=90&&x<100)
{  r=100-x;
    cout<<"you need to reach to the next rank : "<<r<<endl;
}
else if(x=100)
{
    cout<<"expert "<<endl;
}
else
{
    cout<<"the number is invalid"<<endl;
}

	return 0;
}
