#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void bucket_sort(int arr[],int k,int n)
{
        int m_ax = arr[0];
        for(int i=0;i<n;i++)
        {
            m_ax = max(m_ax,arr[i]);
        }
        m_ax++;
        vector<int> bkt[k];
        for(int i=0;i<n;i++)
        {
            int bi = (k*arr[i])/m_ax;
            bkt[bi].push_back(arr[i]);
        }
        for(int i=0;i<k;i++)
        {
            sort(bkt[i].begin(),bkt[i].end());
        }
        int index =0;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<bkt[i].size();j++)
            {
                arr[index++] = bkt[i][j];
            }
        }
        cout <<"yayyyy";
}


void PrintArray(int arr[], int Size)
{
	int i;
	for (i = 0; i < Size; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
int main()
{
	int Array[] = {10,38,59,35,28,40,80,78,26,19,63,76,93};
	int n = sizeof(Array) / sizeof(Array[0]);
	cout<<"Before Sorting: ";
	PrintArray(Array,n);
	bucket_sort(Array,5,n);
	cout << "Sorted array: ";
	PrintArray(Array, n);
	return 0;
}
