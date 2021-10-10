#include<iostream>
#include<algorithm>
using namespace std;
void m_erge(int arr[],int l,int m,int r)
{
        int n1 = m-l+1,n2 = r-m;
        int left[n1];
        int right[n2];
        for(int i=0;i<n1;i++)
        {
            left[i] = arr[l+i];
        }
        for(int j=0;j<n2;j++)
        {
            right[j] = arr[m+1+j];
        }
        int i=0,j=0,k=l;
        while(i<n1 && j<n2)
        {
            if(left[i]<right[j])
            {
                arr[k++] = left[i++];
            }
            else
            {
                arr[k++] = right[j++];
            }
        }
        while(i<n1)
        {
            arr[k++] = left[i++];
        }
        while(j<n2)
        {
            arr[k++] = right[j++];
        }

}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)           // super important
    {int mid = l+(r-l)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    m_erge(arr,l,mid,r);
    }
}
int main()
{
    int arr[] = {12,46,96,49,37,46,89,43,25,34,68,58};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<"\t";
    }
}
