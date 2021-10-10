#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n ; i++)
    {
        int key = arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[] = {18,84,56,90,36,67};
    insertion(arr,sizeof(arr)/sizeof(arr[0]));
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        cout << arr[i] <<"\t";
}
