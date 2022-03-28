#include<iostream>
using namespace std;

class Fajar{
    public:
        int umur;
        string univ;

        //ini constructor
        Fajar(int inputUmur, string inputUniv){
            Fajar::umur=inputUmur;
            Fajar::univ=inputUniv;

            cout<<Fajar::umur<<endl;
            cout<<Fajar::univ<<endl;
            
        }
};

int main(){
    Fajar data=Fajar(22, "Atma Jaya");
    return 0;
}