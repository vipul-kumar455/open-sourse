
#include <bits/stdc++.h>

using namespace std;
//finding largest element index
int solve1(int a[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[res])
        res=i;
    }
    return res;
}

// second largest number index
int second(int a[],int n)
{
    int get=solve1(a,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[get])
        {
            if(res==-1)
            {
                res=i;
            }
            else if(a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;
}
//sorted otr nt
bool sorted(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        return false;
    }
    return true;
}
//reversin the array 
void reverse(int a[],int n)
{
    int l=0;
    int h=n-1;
    while(l<h)
    {
        swap(a[l],a[h]);
        l++;
        h--;
    }
    
}
int main()
{
    
     
    int a[]={3,7,8,9,3,89};
    int b[]={1,2,3,4};
    int m=sizeof(b)/sizeof(b[0]);
    int n=sizeof(a)/sizeof(a[0]);
    
    cout<<solve1(a,n);
    cout<<endl;
    cout<<second(a,n)<<endl;
    cout<<sorted(b,m)<<endl;
    reverse(b,m);
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
