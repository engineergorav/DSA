// reverse the array from a given index

#include<iostream>
#include<vector>

using namespace std;
void reverseArray(vector<int> arr, int m)
{
    int start = m;
    int end = arr.size()-1;     	
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout << "Modified array: ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
int main()
{
    int n,m;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    
    // Taking input for elements of array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Taking input for position M
    cout << "Enter the position m: ";
    cin >> m;

    if (m< 0 || m >= n - 1) {
        cout << "Invalid position m. It should be in the range [0, " << n - 2 << "]." << endl;
        return 1;
    }

    // Calling function to reverse array after M
    reverseArray(arr,m);
    return 0;

}