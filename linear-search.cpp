#include<iostream>
using namespace std;

bool keypresent(int arr[], int length, int key)
{
    if(length==0)
    return false;

    if(length==1)
    {
        if(key==*(arr))
        {
            return true;
        }
        else
        return false;
    }
    
    if(key==*arr)
    {
        return true;
    }
    else
    return keypresent(arr+1,length-1,key);

}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    if(keypresent(arr,length,key))
    cout<<"Element is present";
    else
    cout<<"Element is absent";
}