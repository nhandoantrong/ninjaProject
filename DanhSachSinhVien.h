#ifndef DANHSACHSINHVIEN_H_INCLUDED
#define DANHSACHSINHVIEN_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string MASV, HO,TEN,PHAI,SDT,MALOP;
    struct SinhVien *next;
};

SinhVien *newSinhVien(string MASV,
                      string HO,
                      string TEN,
                      string PHAI,
                      string SDT,
                      string MALOP)
{
    struct SinhVien *temp =  (struct SinhVien *) new SinhVien();
    temp->MASV=MASV;
    temp->HO=HO;
    temp->TEN=TEN;
    temp->PHAI=PHAI;
    temp->SDT=SDT;
    temp->MALOP=MALOP;

    temp->next=NULL;

    return temp;
};

SinhVien* insertSinhVien(SinhVien *sv, string MASV,
                 string HO,
                 string TEN,
                 string PHAI,
                 string SDT,
                 string MALOP)
{

    SinhVien *nextSV= sv->next;

    sv->next = newSinhVien(MASV,HO,TEN,PHAI,SDT,MALOP);

    sv->next->next = nextSV;

};




#endif // DANHSACHSINHVIEN_H_INCLUDED
