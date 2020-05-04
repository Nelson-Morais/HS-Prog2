#include <iostream>

using namespace std;

int main()
{

    int *x, *y;
    int i=10;

    x=y=&i;


    cout << "&i=" << &i << endl;
    cout << "x= " << x << endl;
    cout << "&x=" << &x << endl;
    cout << "y= " << y << endl;
    cout << "&y=" << &y << endl;
    cout << "i= " << i << endl;
    cout << "*x=" << *x << endl;

    *x=22;
     cout << "i= " << i << endl;


/*
    int i=7, *p, **q;
    p=&i;
    q=&p;
    cout << *p << " " << q << endl;
*/

}
