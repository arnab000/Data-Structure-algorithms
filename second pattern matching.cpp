#include <iostream>
#include <cstring>
using namespace std;
void preKMP(string ptrn, int f[])
{
    int m = ptrn.length(), ck;
    f[0] = -1;
    for (int i = 1; i < m; i++)
    {
        ck = f[i - 1];
        while (ck >= 0)
        {
            if (ptrn[ck] == ptrn[i - 1])
                break;
            else
                ck = f[ck];
        }
        f[i] = ck + 1;
    }
}
bool KMP(string ptrn, string trgt)
{
    int m = ptrn.length();
    int n = trgt.length();
    int f[m];
    preKMP(ptrn, f);
    int i = 0;
    int ck = 0;
    while (i < n)
    {
        if (ck == -1)
        {
            i++;
            ck = 0;
        }
        else if (trgt[i] == ptrn[ck])
        {
            i++;
            ck++;
            if (ck == m)
                return 1;
        }
        else
            ck = f[ck];
    }
    return 0;
}

int main()
{
    string tar,pat;
    cout << "Enter the string: ";
    cin >> tar;
    cout << "Enter the substring you want to find: " ;
    cin >> pat;
    if (KMP(pat, tar))
        cout<<"'"<<pat<<"' found in string '"<<tar<<"'"<<endl;
    else
        cout<<"'"<<pat<<"' not found in string '"<<tar<<"'"<<endl;
}

