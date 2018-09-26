#include <bits/stdc++.h>
using namespace std;

int main()
{
	int count, i, sura[30], num, first, last, mid;
	cout<<"how many elements would you like to enter?:";
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": ";
                cin>>sura[i];
	}
	cout<<"Enter the number that you want to search:";
        cin>>num;
	first = 0;
	last = count-1;
	mid = (first+last)/2;
	while (first <= last)
	{
	   if(sura[mid] < num)
	   {
		first = mid + 1;

	   }
	   else if(sura[mid] == num)
	   {
		cout<<num<<" found in the array at the location "<<mid+1<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           mid = (first + last)/2;
        }
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
	return 0;
}
