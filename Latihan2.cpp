#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;

    cout << "masukan nilai pertama : ";
    cin >>a;
    cout << "masukan nilai kedua : ";
    cin >>b;
    cout << "masukan nilai ketiga : ";
    cin >>c;
    cout << "masukan nilai keempat : ";
    cin >>d;

    if(a>b)
    {
        if(a>c)
            cout << "nilai terbesarnya adalah : " << a;
        else if(a>d)
             cout << "nilai terbesarnya adalah : " << a;
        else
             cout << "nilai terbesarnya adalah : " << a;
    }

    else if(b>c)
    {
        if(b>d)
             cout << "nilai terbesarnya adalah : " << b;
        else
             cout << "nilai terbesarnya adalah : " << d;
    }

    else if(c>d)
             cout << "nilai terbesarnya adalah : " << c;
        else
             cout << "nilai terbesarnya adalah : " << d;




    return 0;
}
