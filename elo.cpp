#include <iostream>
using namespace std;

void Naiwny(int tab[3],int TAB[10])
{
    int counter=0;
    int Bigcouter=0;
    //for(int i=0;i<10-3;i++)
    for(int i=0;i<=10-3;i++)
    {
        counter=0;
        for(int m=0;m<3;m++)
        {
            cout<<" m ="<<m;
            if(tab[m]==TAB[i+m])
            {
                counter++;
            }

        }
        if(counter==3)
        {
            cout<<"udalo sie znalezc szukany ciag znakow na pozycji "<<i<<"-"<<i+2<<endl;
            Bigcouter++;
        }
        else
            {
                cout<<"."<<endl;
            }
        counter=0;

    }
    if(Bigcouter==0)cout<<"nie ma podanego wzorca"<<endl;
}

void


int main()
{
    //m-dluga tablica
    //n-dlugosc wzorca
    int TAB[10]{0,1,0,0,1,1,0,1,0,0};
    int tab[3]{0,1,0};
    Naiwny(tab,TAB);

}
