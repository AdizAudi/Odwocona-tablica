#include <iostream>

using namespace std;

int main()
{
    int tab[10];

    for( int  i=0;i<=9;i++){
        cout<<endl<<"Podaj "<<i+1<<" liczbe:";
        cin>>tab[i];
    }

    cout<<"Zawartosc tablicy: "<<endl;
    for (int i=0;i<=9;i++){
        cout<<tab[i]<<" ";
    }

    cout<<endl;

    cout<<"Odwrocona tablica: "<<endl;
    for (int i=9; i>=0;i--)
        cout<<tab[i]<<" ";

    return 0;
}
