#include<iostream>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

struct puskes{
string nama,poli;
string alamat,keluhan;
int umur,nomor,edit;
}data[100];
int tgl,bln,thn;
char awal;
int p,q,r,x,y,t,u;
int a,c,d,e,f,i,k,l,m,n;
    void datapasien()
{
    int pilih=0,p=1;
    do{
            awal:
        cout<<"=======================DATA PASIEN====================="<<endl;
        cout<<"\n1.Input Data"<<endl;
        cout<<"\n2.Lihat Data"<<endl;
        cout<<"\n3.Edit Data"<<endl;
        cout<<"\n4.Hapus Data"<<endl;
        cout<<"\n0.Keluar"<<endl;
        cout<<"Pilih Menu : ";cin>>pilih;
        cout<<"======================================================="<<endl;

    switch(pilih)
    {
        case 1:{if(p==10){cout<<"Data Kosong"<<endl;}else
        {
            cout<<"\nJumlah Data Yang Akan diinput : ";cin>>p;
            q=0;
            for(r=0;r<p;r++){
            q=q+1;
            cout<<"\nData ke-"<<q<<endl;
            cout<<"Nomor Pasien\t : ";cin>>data[a].nomor;
            cout<<"Nama Pasien\t : ";cin>>data[a].nama;
            cout<<"Alamat Pasien\t : ";cin>>data[a].alamat;
            cout<<"Keluhan Pasien\t : ";cin>>data[a].keluhan;
            cout<<"Poli Pasien\t : ";cin>>data[a].poli;
            cout<<endl;
            a++;
            }
        };};break;

        case 2:{if(p==10){cout<<"Data Salah"<<endl;}else{{
        {
            cout<<"==========================TAMPILKAN DATA========================="<<endl;
            cout<<"-------------------------------------------------"<<endl;
            cout<<"Nomor\t||Nama Pasien\t||Alamat\t||Keluhan\t||Poli\t"<<endl;
            cout<<"-------------------------------------------------"<<endl;

            cout<<""<<data[c].nomor;
            cout<<"\t"<<data[c].nama;
            cout<<"\t\t"<<data[c].alamat;
            cout<<"\t\t"<<data[c].keluhan;
            cout<<"\t\t"<<data[c].poli;
            cout<<endl;

        };};break;}}

        case 3:{if(p==10){cout<<"Data Salah"<<endl;}else
        {
            cout<<"===================EDIT DATA================="<<endl;
            cout<<"Masukkan data yang akan diedit : ";cin>>k;
            l=k-1;
            cout<<"Nama : ";cin>>data[l].nama;
            cout<<"Alamat : ";cin>>data[l].alamat;
            cout<<"Nama : ";cin>>data[l].keluhan;
            cout<<"Alamat : ";cin>>data[l].poli;

        };}break;

        case 4:{if(p==10){cout<<"DATA SALAH"<<endl;}else
        {
            cout<<"==========================HAPUS DATA======================"<<endl;
            cout<<"Hapus data ke : ";cin>>x;
            y=x-1;
            c--;
            for(int a=y;a<c;a++){data[a]=data[a+1];}
            cout<<"Data ke "<<x<<" Terhapus";
        ;}break;
        goto awal;
        }

        case 0:cout<<"================Keluar=================";break;
        default:cout<<"Input Salah"<<endl;

}}
while(pilih!=0)
;}



    void poli()
    {
        cout<<"========================DATA POLI======================"<<endl;
        int pilih=4,w=1;
        do{
            cout<<"\n1.List Data Poli"<<endl;
            cout<<"\n2.Lihat Data Poli Pasien"<<endl;
            cout<<"\n3.Edit Data Poli"<<endl;
            cout<<"\n4.Hapus Data Poli pasien"<<endl;
            cout<<"\n0.Keluar"<<endl;
            cout<<"Pilih Menu";cin>>pilih;

            switch(pilih)
            {
                case 1:{if(w==10){cout<<"Data Masih Kosong"<<endl;}else
                {
                    cout<<"===========Daftar Poli=========="<<endl;
                    cout<<"\n1.Poliklinik Anak"<<endl;
                    cout<<"\n2.Poliklinik Umum"<<endl;
                    cout<<"\n3.Poliklinik Gigi"<<endl;
                    cout<<"\n4.Poliklinik Penyakit Dalam"<<endl;
                    cout<<"\n5.Poliklinik T.H.T"<<endl;
                    cout<<"\n6.Poliklinik Gizi"<<endl;
                    cout<<"================================"<<endl;
                };}break;

                case 2:{if(w==10){cout<<"Data Salah"<<endl;}else
                {
                 cout<<"\t\tTAMPILKAN DATA POLI\t\t"<<endl;
                 cout<<"============================================"<<endl;
                 cout<<"NAMA PASIEN\t|| Poliklinik"<<endl;
                 cout<<"============================================"<<endl;
                 cout<<" "<<data[d].nama<<"\t\t\t"<<data[d].poli<<endl;
                 cout<<"--------------------------------------------"<<endl;
                 cout<<endl;
                 ;};}break;

                case 3:{if(w==10){cout<<"Data Salah"<<endl;}else
                {
                cout<<"===================EDIT DATA================="<<endl;
                cout<<"Masukkan data yang akan diedit : ";cin>>e;
                f=e-1;
                cout<<"Nama : ";cin>>data[f].nama;
                cout<<"Poli : ";cin>>data[f].poli;
                };}break;


                case 4:{if(w==10){cout<<"DATA SALAH"<<endl;}else
                {
                cout<<"==========================HAPUS DATA======================"<<endl;
                  cout<<"Hapus data ke : ";cin>>t;
            u=t-1;
            f--;
            for(int f=u;f<d;f++){data[f]=data[f+1];}
            cout<<"Data ke "<<t<<" Terhapus";
                ;}break;}

                    case 0:cout<<"================Keluar=================";break;
                default:cout<<"Input Salah"<<endl;

            }}

            while(pilih!=0)
        ;}


        void daftar()
        {
            cout<<"Masukkan tanggal pendaftaran : "<<endl;
            cout<<"Tanggal : ";cin>>tgl;
            cout<<"bulan   : ";cin>>bln;
            cout<<"Tahun : ";cin>>thn;
            cout<<endl;

            cout<<"Data pasien : "<<endl;
            cout<<"Nomor Pasien\t : ";cin>>data[m].nomor;
            cout<<"Nama Pasien\t : ";cin>>data[m].nama;
            cout<<"Alamat Pasien\t : ";cin>>data[m].alamat;
            cout<<"Keluhan Pasien\t : ";cin>>data[m].keluhan;
            cout<<"Poli Pasien\t : ";cin>>data[m].poli;
            cout<<endl;

            cout<<"Data Poli : "<<endl;
            int pilih=4,w=1;
        do{
            cout<<"\n1.Poliklinik Anak"<<endl;
            cout<<"\n2.Poliklinik Gigi"<<endl;
            cout<<"\n3.Poliklinik Gizi"<<endl;
            cout<<"\n4.Poliklinik Tulang"<<endl;
            cout<<"\n0.Keluar"<<endl;
            cout<<"Pilih Menu";cin>>pilih;

            switch(pilih)
            {
                case 1:{if(w==10){cout<<"Data Masih Kosong"<<endl;}else
                {
                    cout<<"Data Tersimpan"<<endl;
                };}break;

                case 2:{if(w==10){cout<<"Data Masih Kosong"<<endl;}else
                {
                    cout<<"Data Tersimpan"<<endl;
                };}break;

                case 3:{if(w==10){cout<<"Data Masih Kosong"<<endl;}else
                {
                    cout<<"Data Tersimpan"<<endl;
                };}break;

                case 4:{if(w==10){cout<<"Data Masih Kosong"<<endl;}else
                {
                    cout<<"Data Tersimpan"<<endl;
                };}break;

                 case 0:cout<<"================Keluar=================";break;
                default:cout<<"Input Salah"<<endl;
        }
        }
        while(pilih!=0);
        }







        int main()
        {
                int pilih,p=1;
                do{
                    cout<<"++++++++++++++++++APLIKASI PENDAFTARAN PASIEN PUSKESMAS++++++++++++++++++++"<<endl;
                    cout<<"\n1.Data Pasien"<<endl;
                    cout<<"\n2.Data Poli"<<endl;
                    cout<<"\n3.Pendaftaran"<<endl;
                    cout<<"\n0.Keluar"<<endl;
                    cout<<"Pilih Menu : ";cin>>pilih;
                    switch(pilih)
                    {
                        case 1:{if(p==10){cout<<"DATA KOSONG"<<endl;}else{datapasien();};}break;
                        case 2:{if(p==10){cout<<"Salah"<<endl;}else{poli();};}break;
                        case 3:{if(p==10){cout<<"Salah"<<endl;}else{daftar();};}break;
                        case 0:cout<<"*********PROGRAM SELESAI***********"<<endl;break;
                        default :cout<<"INVALID"<<endl;

                    }}
                    while(pilih!=0);

getch();
        }
