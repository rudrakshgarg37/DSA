#include <iostream>
using namespace std;

void swapnum(int &a, int &b){
    int temp= a;
    a=b;
    b=temp;
}
void Display(int* arr, int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<"\t";
	}
}

int main()
{
  int arr[6]={1,2,3,4,5,6};
   
   int size=6;
   
   for(int i=0; i<size/2; i++){
       swap(arr[i], arr[size-i-1]);
   }
    Display(arr,size);
  return 0;
}