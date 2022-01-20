#include <iostream>
#include <string>
using namespace std;

int main(){
    string awal;
    cin >> awal;
    int indeksAsterik = awal.find("*");

    int banyakString;
    cin >> banyakString;
    string cek[banyakString];
    for(int i=0;i<banyakString;i++){
       cin >> cek[i];
    }

    awal.erase(awal.begin()+indeksAsterik, awal.end());

    for(int i=0;i<banyakString;i++){
        string cetak = cek[i];
        cek[i].erase(cek[i].begin()+indeksAsterik,cek[i].end());
        if(awal == cek[i]){
            cout<< cetak << endl;
        }

    }


    return 0;
}

