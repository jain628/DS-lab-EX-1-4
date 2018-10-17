#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{

    cin>>a[i];
}
for(i=0;i<n;i++)
{
    for(j=i;j!=0;j--)
    {

        if(j>0&&a[j]<a[j-1])
        {

            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    }

}
cout<<"Sorrted array using insertion sort";
for(i=0;i<n;i++)
{

    cout<<a[i]<<" ";
}
return 0;
}