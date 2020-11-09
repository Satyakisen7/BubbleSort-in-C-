#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    int i,j,temp;
    bool swapped;
    for(i=0;i<n;++i)
    {
        swapped=false;
        for(j=0;j<n-1-i;++j)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped==false)
        break;

    }
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i)
    {
        cin>>arr[i];
    }
    bubble(arr,size);
    display(arr,size);
}