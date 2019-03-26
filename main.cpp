#include <iostream>

using namespace std;

int main()
{
    unsigned int przypadki; // ilosc przypadkow
    cin>>przypadki;

    if((przypadki>=1) && (przypadki<=30))
    for(int i=0; i<przypadki;i++)
    {
       unsigned int n;
       cin>>n;
       if((n>=0) && (n<=9))
       switch (n)
    {
    case 0:                        // // dla n=0,1 cyfra dziesiatek i jednosci kolejno wynosi 0 1 dlatego skrocenie kodu
    case 1:
        {
            cout<<"0 1"<<endl;
            break;
        }
    case 2:
        {
            cout<<"0 2"<<endl;
            break;
        }
    case 3:
        {
            cout<<"0 6"<<endl;
            break;
        }
    case 4:
        {
            cout<<"2 4"<<endl;
            break;
        }

    case 5:                         // dla n=5,6 cyfra dziesiatek i jednosci kolejno wynosi 2 0 dlatego skrocenie kodu
    case 6:
        {
            cout<<"2 0"<<endl;
            break;
        }
    case 7:
        {
            cout<<"4 0"<<endl;
            break;
        }
    case 8:
        {
            cout<<"2 0"<<endl;
            break;
        }
    case 9:
        {
            cout<<"8 0"<<endl;
            break;
        }
    }
    else if((n>=10) && (n<=1000000000))
    {
        cout<<"0 0"<<endl;
    }
    }
    return 0;
}
