#include<bits/stdc++.h>
using namespace std;
void delchar(char *x,int a, int b)
{
  if ((a+b-1) <= strlen(x))
  {
    strcpy(&x[b-1],&x[a+b-1]);
    puts(x);
    }
}

int main()
{
     char string[10000];
     int n,pos,p;
     puts("Enter a string :");
     gets(string);
     printf("Enter the position from where you want to delete:");
     scanf("%d",&pos);
     printf("Enter the number of characters to be deleted :");
     scanf("%d",&n);
     delchar(string, n,pos);
}

