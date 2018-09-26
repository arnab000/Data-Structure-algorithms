
#include<bits/stdc++.h>
using namespace std;
char a[1000];
char b[1000];
char c[1000];
int p=0,r=0,i=0;
int t=0;
int x,g,s,n,o;
void inserts(char *a,int p,char *b)
{
   r = strlen(a);
    n = strlen(b);
    i=0;
    while(i <= r)
    {
     c[i]=a[i];
     i++;
    }
    s = n+r;
    o = p+n;
    for(i=p;i<s;i++)
    {
     x = c[i];
     if(t<n)
     {
      a[i] = b[t];
      t=t+1;
     }
     a[o]=x;
     o=o+1;
    }

    printf("%s", a);
}

int main()
{

puts("Enter First String:");
gets(a);
puts("Enter Second String:");
gets(b);
printf("Enter the position where the item has to be inserted: ");
scanf("%d",&p);
inserts(a,p,b);

}
