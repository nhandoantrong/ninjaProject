#include <iostream>
#include <MonHoc.h>
#include <DanhSachSinhVien.h>
#include <DanhSachLopTinChi.h>
using namespace std;



int main()
{
    struct MonHoc *root = NULL;
    root = insert(root, "C1","MON1",1,1);
    insert(root, "C2","MON2",1,1);
    insert(root, "C3","MON1",1,1);
    insert(root, "D4","MON1",1,1);
    insert(root, "B5","MON1",1,1);
    insert(root, "A1","MON1",1,1);
    insert(root, "A2","MON1",1,1);
    inorder(root);
}
