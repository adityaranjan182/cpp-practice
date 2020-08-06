#include <iostream>
using namespace std;

int ternary(int arr[],int start,int end,int item)
{
    if (start <= end)
    {
        int mid1 = (start+end)/3;
        int mid2 = mid1+(end)/3;
        cout<<start<<" "<<mid1<<" "<<mid2<<" "<<end<<endl;
        if (item==arr[mid1])
        {
            return mid1;
        }
        if (item==arr[mid2])
        {
            return mid2;
        }
        if (item<arr[mid1])
        {
            return ternary(arr,start,mid1-1,item);
        }
        if (item>arr[mid2])
        {
            return ternary(arr,mid2+1,end,item);
        }
        if (item>mid1 || item<mid2)
        {
            return ternary(arr,mid1+1,mid2-1,item);
        }
    }
    return -1;
}
int main()
{
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int result = ternary(arr,0,n-1,5);
    cout<<"item present at index = "<<result;
}
