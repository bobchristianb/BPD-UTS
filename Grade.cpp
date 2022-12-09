

#include <iostream>
#include <stdio.h>
using namespace std;

main(){
    float uts;
    int nilaiakhir;
    string nilaihuruf;

    
    printf("Masukan Nilai : ");  
	scanf("%f", &uts);

    //Menghitung nilai akhir
   nilaiakhir = uts;

    //Menentukan nilai huruf
    switch (nilaiakhir)
    {
        case 85 ... 100: nilaihuruf="A"; break;
        case 70 ... 84: nilaihuruf="B";break;
        case 55 ... 69: nilaihuruf="C";break;
        case 40 ... 54: nilaihuruf="D";break;
        case 0 ... 39: nilaihuruf="E";break;

        default  :cout<<"Salah, nilai diluar jangkauan. \n";
    }
    //menampilkan nilai angka dan nilai huruf
    
    cout<<"Nilai akhir angka : "<<nilaiakhir<<endl;


    cout<<"Nilai akhir huruf : "<<nilaihuruf<<endl;
}
