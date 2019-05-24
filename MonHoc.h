#ifndef MONHOC_H_INCLUDED
#define MONHOC_H_INCLUDED
#include <bits/stdc++.h>

using namespace std;
struct MonHoc
{
    string MAMH;
    string TENMH;
    int STCLT;
    int STCTH;
    struct MonHoc *left, *right;
};

struct MonHoc *newMonHoc(string MAMH,
                         string TENMH,
                         int STCLT,
                         int STCTH)
{
    struct MonHoc *temp =  (struct MonHoc *) new MonHoc();
    temp->MAMH = MAMH;
    temp->TENMH = TENMH;
    temp->STCLT = STCLT;
    temp->STCTH = STCTH;


    temp->left = temp->right = NULL;
    return temp;
}

struct MonHoc* insert(struct MonHoc* MonHoc, string MAMH,
                      string TENMH,
                      int STCLT,
                      int STCTH)
{

    /* If the tree is empty, return a new MonHoc */
    if (MonHoc == NULL)
        return newMonHoc(MAMH,TENMH,STCLT,STCTH);

    /* Otherwise, recur down the tree */
    if (MAMH < MonHoc->MAMH)
        MonHoc->left  = insert(MonHoc->left, MAMH,TENMH,STCLT,STCTH);
    else if (MAMH > MonHoc->MAMH)
        MonHoc->right = insert(MonHoc->right, MAMH,TENMH,STCLT,STCTH);

    /* return the (unchanged) MonHoc pointer */
    return MonHoc;
}

void inorder(struct MonHoc *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->MAMH<<endl;
        inorder(root->right);
    }
}


#endif // MONHOC_H_INCLUDED
