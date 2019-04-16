#include<iostream>
using namespace std;
//swap function
void swap(int*x,int*y){
int*temp=x;
x=y;
y=temp;
}
//function partition to find the position and arrange the array
int  partition(int arr[],int low,int high,int pivot){
    int pi=low;
    for(int i=0;i<high;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pi]);
            pi=pi+1;
        }
    }
swap(arr[pi],arr[high]);
return pi;
}
//quick sort function that place all the element on right which are greater than pivot element
//and place all element on right which are greater than pivot element
//choose last element as pivot element

//if an element is lesser or equal to pivot element
//now we have to find the pivot position of element by
void quicksort(int arr[],int low,int high,int n){
if(low<high){
int pivot=arr[n-1];
int PI=partition( arr,low,high,pivot);
    quicksort(arr,low,PI-1,PI);
    quicksort(arr,PI+1,high,n-PI);
}
}
void displayarray(int arr[],int n){
for(int i=0;i<n;i++)
    cout<<arr[i];
}


int main(){
int n,i;
cout<<"enter the size of array  ";
cin>>n;
int arr[n];
cout<<"enter the element of array  ";
for(i=0;i<n;i++){
    cin>>arr[i];
}
//call function to print all element of array
displayarray(arr,n);
//call function to sorting the array
quicksort(arr,0,n-1,n);
displayarray(arr,n);
return 0;
}

