#include<iostream>
using namespace std;

int partition(int arr[], int s , int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }


    int pivotindex = s+cnt;
    swap(arr[pivotindex],arr[s]);

    int i =s, j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i] <=pivot){
            i++;
        }
        while(arr[j] >pivot){
            j--;
        }
        if(i <pivotindex && j> pivotindex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[] , int s , int e){
    
    if(s >= e) return;
    // partition
    int p = partition(arr,s,e);
   
    // left part sort
    quicksort(arr,s,p-1);
   
    // right paart sort
    quicksort(arr,p+1,e);
}

int main(){

    int arr[10] = {2,4,1,6,9, 9,9,9,9,9};
    int n = 10;
    quicksort(arr , 0 ,n -1 );
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
   
}
