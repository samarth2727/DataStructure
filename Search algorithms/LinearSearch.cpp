#include<iostream>       // time complexity is  O(n)
using namespace std; 

int LinearSearch(int arr[],int n,int key)   // function for  linearasearch traversing through the array to find the key.
{
  for(int i=0;i<n;i++){
      if(arr[i]==key){
          return i;
      }
  }
   return  -1;
}

int main(){
int  n;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter elements of array"<<endl;
int arr[n];
for(int i=0;i<n;i++){                  // taking input elements  of array
    cin>>arr[i];
}
int key;
cout<<"enter the number to find"<<endl;
cin>>key;
cout<<LinearSearch(arr,n,key);      // calling leanersearch function
return 0;
}