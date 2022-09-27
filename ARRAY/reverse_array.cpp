// Reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[] , int n){

    int start = 0;
    int end = n - 1;

    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){

    for(int i= 0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

int main(){

    int arr[6] = {2 ,3, 6, 7, 8 ,9};
    int brr[5] = {3, 5 ,6,4, 8};

    reverse(arr,6);
    reverse(brr , 5);

    printArray(arr , 6);
    printArray(brr , 5);

    return 0;
}

// 2nd APPROACH


// #include <iostream>
// using namespace std;
// void reverse(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     reverse(arr, start + 1, end - 1);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     reverse(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }