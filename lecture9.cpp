/*//TAKING THE VALUES IN AN ARRAY
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int arr[100];
//taking values
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

//printing
    cout<<"THE ARRAY IS: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
}*/


















/*//MIN MAX IN ARRAY
#include <iostream>
using namespace std;

int FindMax(int arr[],int n){
    int max = arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]>arr[0]){
            max = arr[i];
        }
        }
        return max;

    }

int FindMin(int arr[],int n){
    int min= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<arr[0]){
            min=arr[i];
        }

    }
    return min;
}    

int main(){
    int arr[5]={1,2,3,4,5};

    int max= FindMax(arr,5);
    cout<<"MAX ELEMENT IS : "<< max << endl;

    int min= FindMin(arr,5);
    cout<<"MIN ELEMENT IS : "<< min << endl;

}*/




















/*//sum of elements
#include <iostream>
using namespace std;

int FindSum(int arr[],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    return sum;
}

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int arr[100];
//taking values
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<< endl;

int sum= FindSum(arr,size);
cout<<"The sum is " << sum<<endl;
}*/













/*//linear search
#include <iostream>
using namespace std;

bool search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return 1;
        }
//maine phle idhr else statement daalke ye krdiya tha ki return 0 but usse glt aa rha tha bcz loop exit ho ja rha tha so always bahar kro else walaRF
 }
    return 0;
}
int main(){
    int arr[6]={6,5,4,3,2,1};
    int target;

    bool found= search(arr,6,1);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key isn't present"<<endl;    }

}*/


















/*REVERSE AN ARRAY
#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        //Swap(arr[start], arr[end]) bhi use kr skte hain
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    

}
int main(){
    int arr[6]={6,5,4,3,2,1};

    reverse(arr,6);

    cout<<"THE REVERSED ARRAY IS ";
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    
    
}*/






/*
//swap alternative
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

void swapAlt(int arr[],int n){
    for(int i=0;i<=n;i+=2){
            if(i+1<n){
                swap(arr[i], arr[i+1]); 
            }
    }
    }
    


int main(){
    int arr[6]={6,5,4,3,2,1};
    int odd[5]={1,2,3,4,5};

    swapAlt(arr,6);
    swapAlt(odd,5);

    cout<<"THE FINAL ARRAY IS ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"THE FINAL ARRAY IS ";
    for(int i=0;i<5;i++){
        cout<<odd[i]<<" ";
    }

    
    
}
*/


