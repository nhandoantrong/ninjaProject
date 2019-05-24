#ifndef DANHSACHLOPTINCHI_H_INCLUDED
#define DANHSACHLOPTINCHI_H_INCLUDED


struct DangKy
{
    string MASV;
    int DIEM;

    DangKy *next;
};

DangKy *newDangKy(string MASV,int Diem)
{
    struct DangKy *temp =  (struct DangKy *) new DangKy();
    temp->MASV=MASV;
    temp->DIEM= Diem;
    temp->next=NULL;

    return temp;
};

DangKy* insertDangKy(DangKy *dk, string maSV, int diem)
{
    DangKy *nextDK = dk->next;
    dk->next = newDangKy(maSV, diem);
    dk->next->next= nextDK;
}



struct LopTinChi
{
    string MALOPTC,MAMH,Nienkhoa;
    int Hocky,Nhom, soSVmax;
    DangKy *dangKy;
};

LopTinChi *newLopTinChi(string MALOPTC,string MAMH,string Nienkhoa,
                        int Hocky, int Nhom, int soSVmax)
{
    LopTinChi *temp = (LopTinChi *) new LopTinChi();

    temp->MALOPTC=MALOPTC;
    temp->MAMH= MAMH;
    temp->Nienkhoa=Nienkhoa;
    temp->Hocky=Hocky;
    temp->Nhom= Nhom;
    temp->soSVmax=soSVmax;

    temp->dangKy=NULL;
}

#endif // DANHSACHLOPTINCHI_H_INCLUDED
