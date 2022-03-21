#include <iostream>

using namespace std;

int NonIndvSubArraySum(int arr[],int n){
    int SubArraysum=0;
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
        }
        SubArraysum=sum+SubArraysum;
    }
    return SubArraysum;
}


int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:";
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    
    int SumofIndElemenst=0;
    for(int s=0;s<n;s++){
        SumofIndElemenst=SumofIndElemenst+arr[s];
    }
    //cout<<"Sum of Individual Elements ="<<SumofIndElemenst;
    
    
    int TOtalSum=SumofIndElemenst+NonIndvSubArraySum(arr,n);
    cout<<TOtalSum;
    
    
    

    return 0;
}
