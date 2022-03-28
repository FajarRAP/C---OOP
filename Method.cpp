#include<iostream>
using namespace std;

class Fajar{
    public:
        int umur;
        string univ;

        Fajar(int p_umur, string p_univ){
            Fajar::umur=p_umur;
            Fajar::univ=p_univ;
        }
        
        //tanpa parameter dan return
        void outputData(){
            cout<<"Umur saya "<<umur<<" tahun"<<endl;
            cout<<"dan sedang kuliah di "<<univ<<endl;
        }
};
int main(){
    Fajar datanya1=Fajar(19, "Universitas Ahmad Dahlan");
    Fajar datanya2=Fajar(22, "Universitas Atma Jaya");
    datanya1.outputData();
    return 0;
}