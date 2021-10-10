#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int i,int n)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left >=n && right >=n)
    {
        return;
    }
    if(left<n && a[left] > a[largest])
    {
        largest = left;
    }
    if(right <n && a[right] > a[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(a[i],a[largest]);
        heapify(a,largest,n);

    }

}
void buildheap(int arr[],int n)
{
    for(int i = (n-2)/2; i>=0;i--)
    {
        heapify(arr,i,n);
    }
}
void heapsort(int arr[],int n)
{
    buildheap(arr,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}
int main()
{
    int arr[] = {18,84,56,90,36,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n <<"\t";
    heapsort(arr,n);
    for(int i=0;i<n;i++)
        cout << arr[i] <<"\t";
}

