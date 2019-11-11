#include <iostream>

using namespace std;

int main()
{
    double *a=new double(0),*b=new double(0),*c=new double(0);
    cout<<"Введите три стороны: ";
    cin>>*a>>*b>>*c;
    
    if ((*a==*b)||(*a==*c)||(*b==*c)){
        cout<<"Равнобедренный";
    }else{
        cout<<"Не равнобедренный";
    }
delete a;
delete b;
delete c;
    return 0;
}