#include<iostream>


using namespace std;
int main() {
// Membuat variabel 5 nilai 
double nilaimtk,nilaipkn,nilaiipa,nlaibind,nilaieng;
double rata;
// INTRO
cout<<"COY WILLI SIMARMATA" <<endl;
cout<<"312310238" <<endl;
cout<<"TI.23.C.4" <<endl;
cout <<endl;

// PROSES INPUT KE VARIABEL YANG TELAH DIBUAT
cout << "Masuka NIlai Ulangan MTK Kamu         : ";
cin >> nilaimtk ;
cout << "Masukan Nilai Ulangan PKN kamu        : ";
cin >> nilaipkn ;
cout << "Masukan Nilai Ulangan B.INDONESIA kamu: ";
cin >> nlaibind;
cout << "Masukan Nilai Ulangan IPA Kamu        : ";
cin >> nilaiipa ;
cout << "Masuka NIlai Ulangan B.Inggris Kamu   : ";
cin >> nilaieng ;
// PROSES HITUNGRATA RATA VARIABEL 5 NILAI
rata =(nilaimtk+nilaipkn+nilaiipa+nilaieng) /5;

//PROSES PENENTUAN KONDISI A DAN CETAK OUTPUT
if(rata>70)
{cout << "selamat kamu lulus,Nilai kamu " <<rata<< ".Mama Kamu Akan Beli Iphon!" <<endl;}

//PROSES PENENTUAN KONDISI B DAN CETAK OUTPUT
else{
cout << "KAMU TIDAK LULUS!,Nilai kamu" <<rata<< ".PERGI SANA, kamu Dicoret Dari KK!" <<endl;}
return 0;

}