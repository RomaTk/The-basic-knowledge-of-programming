#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double *a=new double(0),*b=new double(0),*c=new double(0),*a1=new double(0),*b1=new double(0),*c1=new double(0);
    int *a2=new int(0),*b2=new int(0),*c2=new int(0),*sw=new int(0);
    cout<<"Введите три значения:";
    cin>>*a1>>*b1>>*c1;
    cout<<*a1<<' '<<*b1<<' '<<*c1<<endl;
    *a=fabs(*a1);
    *b=fabs(*b1);
    *c=fabs(*c1);
    
    *a2=(((*a>*b)&&(*a<*c))||((*a<*b)&&(*a>*c)));
    *b2=(((*b>*a)&&(*b<*c))||((*b<*a)&&(*b>*c)))*2;
    *c2=(((*c>*a)&&(*c<*b))||((*c<*a)&&(*c>*b)))*3;
    
    
    *sw=*a2+*b2+*c2;
    
    switch (*sw){
        case 1:{
            cout<<*a1;
            break;
        }
        case 2:{
            cout<<*b1;
            break;
        }
        case 3:{
            cout<<*c1;
            break;
        }
        default:{
            cout<<"есть два одинаковых числа";
        }
    }
    
    delete a;
    delete b;
    delete c;
    delete a1;
    delete b1;
    delete c1;
    delete a2;
    delete b2;
    delete c2;
    delete sw;
    
    return 0;
}