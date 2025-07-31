#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any integer"<<endl;
    cin>>a;
    cout<<"Integer= "<<a<<endl<<"size of a= "<<sizeof(a)<<" bytes"<<endl;
    cout<<endl;
    float b;
    cout<<"Enter any float value"<<endl;
    cin>>b;
    cout<<"Float Value= "<<b<<endl<<"size of b= "<<sizeof(b)<<" bytes"<<endl;
    cout<<endl;
    double c;
    cout<<"Enter any decimal value with long decimal "<<endl;
    cin>>c;
    cout<<"Decimal Value= "<<c<<endl<<"size of c= "<<sizeof(c)<<" bytes"<<endl;
    cout<<endl;
    string d;
    cout<<"Enter any word"<<endl;
    cin>>d;
    cout<<"String= "<<d<<endl<<"size of d= "<<sizeof(d)<<" bytes"<<endl;
    cout<<endl;
    char e;
    cout<<"Enter any character"<<endl;
    cin>>e;
    cout<<"Character= "<<e<<endl<<"size of e= "<<sizeof(e)<<" bytes"<<endl;
    cout<<endl;
    bool f;
    cout<<"Enter any boolean value"<<endl;
    cin>>f;
    cout<<"Boolean Value= "<<f<<endl<<"size of f= "<<sizeof(f)<<" bytes"<<endl;
}
