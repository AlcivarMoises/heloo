#include<iostream>
#include<math.h>
using namespace std;

 int main()

 {

    double a,b,c; //variables reales de doble precision
    double d;

    cout<<"ingresa el valor de a:";
    cin>>a; 

     cout<<"ingresa el valor de b:";
    cin>>b; 

     cout<<"ingresa el valor de c:";
    cin>>c; 

if( a==0)
{

    cout<<endl<<"Imposible dividir para cero";
}else
{
    //calculamos el discriminate
    d=(b*b) - (4*a*c);

    if(d<0)
    {
    
        cout<<endl<<"Las soluciones son imaginarias";
    }else
    
    {
        double x1 = (-b + sqrt(d)) / (2*a);
        double x2 = (-b - sqrt(d)) / (2*a);
        cout<<endl<<"valor de x1 ="<< x1;
        cout<<endl<<"valor de x2 ="<< x2;




    }
}
    return 0;
 }