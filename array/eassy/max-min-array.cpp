#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,max=INT_MIN,min=INT_MAX; 
  cin>>n;
  int array[n];

  for(int i=0;i<n;i++){
    cin>>array[i];
    if(array[i]>max)max=array[i];
    if(array[i]<min)min=array[i];
  }
  
  cout<<"max number : "<<max<<"\nmin number : "<<min<<"\n"<<endl;
 
return 0;
}