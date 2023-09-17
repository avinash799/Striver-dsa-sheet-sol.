// Left Rotate an Array by One place

#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    //first waale element ko last index pe rakh denge
    arr[n-1]=temp;
    return arr;
}
