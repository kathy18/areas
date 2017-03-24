#include <iostream>

using namespace std;

int main()
{
    int x=2;
    float y=5;
    int z=x+y;
    int a=x-y;
    int b=x*y;
    float c=x/y;
    cout<<"la suma de " <<x<<" y "<<y<<" es "<<z<<endl;
    cout<<"la resta de " <<x<<" y "<<y<<" es "<<a<<endl;
    cout<<"la multiplicacion de " <<x<<" y "<<y<<" es "<<b<<endl;
    cout<<"la division de " <<x<<" y "<<y<<" es "<<c<<endl;


    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x;
    float y;
    int w;
    cout<<"ingrese el primer numero: ";
    cin>>x;
    cout<<"ingrese el segundo numero: ";
    cin>>y;
    cout<<"ingrese el tercer numero: ";
    cin>>w;

    cout<<x+y*w<<endl;
    cout<<x/y*w<<endl;




    return 0;
}

