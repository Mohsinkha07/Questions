#include <iostream>
#include <limits.h>
#include <vector>
#include <string.h>
using namespace std;


int fib(int n){
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);

    return ans;
}
void minimum(int arr[],int size,int index,int &mini){

    if(index>=size){
        return ;
    }

    mini = min(mini,arr[index]);
   
    minimum(arr,size,index+1,mini);
}

void maximumno(int arr[],int size,int index,int &maxi){

    if(index>=size){
        return;
    }

    maxi= max(maxi,arr[index]);

    maximumno(arr,size,index+1,maxi);
}
void recursioneven(int arr[],int size,int index,vector<int> &v){

    if(index>=size){
        return;
    }
    if(arr[index]%2==0){
        v.push_back(arr[index]);


    }

    recursioneven(arr,size,index+1,v);
}

void doubling(int arr[],int size,int index,vector<int> &v){

    if(index>=size){
        return;
    }

    if(arr[index]>INT_MIN){

        arr[index] = arr[index]*2;

        v.push_back(arr[index]);
    }

    doubling(arr,size,index+1,v);
}

void doubling2(int arr[],int size,int index){

    if(index>=size){
        return;
    }

        arr[index] = arr[index]*2;

    doubling2(arr,size,index+1);
}

void digitprinting(int digit){

    if(digit==0){
        return;
    }
    // int num = num * 10;
    int num = digit%10;
    digit = digit/10;
   
   // for printing from end
   cout<< num<<endl;
    digitprinting(digit);
    //for printing from start
    cout<< num<<endl;
    
}
bool isarraysorted(int arr[],int size,int index){

    if(index>=size){
        return true;
    }

    if(arr[index]>arr[index-1]){

        bool agekaans = isarraysorted(arr,size,index+1);
        return agekaans;
    }
    else{
        return false;
    }
    
}

int binaryrec(int arr[],int target,int s,int e){

    if(s>e){
        return -1011;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
         return binaryrec(arr,target,mid+1,e);
         
    }
    else {
         return binaryrec(arr,target,s,mid-1);
        
    }

  

}

void findsubsequence(string str,string output,int index){

    if(index>=str.length()){

        cout<< output<<endl;
        return;
    }

    char ch = str[index];

    // include

    output.push_back(ch);
    findsubsequence(str,output,index+1);

    //exclude
    output.pop_back();
    findsubsequence(str,output,index+1);
}

// int main(){
//     string str ="abc";
//     string output = "";
//     int index = 0;


//     findsubsequence(str,output,index);
//     return 0;
// }
/// house robber 2

int  robbing(int arr[],int index , int size)
{
    // base case
    if(index>size){

        return 0;

        }
    // option inclution of 0th index element and start from 0 index 
    int option1 = arr[index] + robbing(arr,index+2,size-2);

    // option exclution of 0th index element and strart from 1 index 
    int option2 = 0 + robbing(arr,index+1,size-1);

    int finalans = max(option2,option1);

    return finalans;
}

int main(){

    int arr[]={205,94,205,169,241,202,144,240};
    int index = 0;
    int size = sizeof(arr)/sizeof(int);

    int option1 = robbing(arr,0,size-2);
    int option2 = robbing(arr,1,size-1);

    int ans = max(option1,option2);

    cout<<ans<<endl;

    return 0;
}

// how I learned Java to break into FAANG (copy me)
// }
// Import a CSV File To PostgreSQL Like A PRO!

// Complete Java Full Stack: AWS, Spring Boot, Microservices

// Spring Boot Tutorial for Beginners | Full Course 2025

// Complete Java, Spring, and Microservices course// int main(){
 //Technology->Java->Core Java 
 //Technology->Java->Spring->Spring Suites 
// Technology->Java->Springboot 


//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int index = 0;
//     int target = 5;
//     int s = 0;
//     int e = size-1;
//     int mid = s+(e-s)/2;

//     int ans = binaryrec(arr,target,s,e);

//     cout<<ans;

//     // int mini = INT_MAX;
//     // int maxi = INT_MIN;
//     // vector<int> v;

//     // int digit = 453;

//     // bool issorted = isarraysorted(arr,size,index);

//     // if(issorted == 1){
//     //     cout<<"array sorted";
//     // }
//     // else{
//     //     cout<<"not";
//     // }

//     // digitprinting(digit);



//     // doubling2(arr,size,index);

//     // for(int i: arr){
//     //     cout<<i<<" ";
//     // }

//     // doubling(arr,size,index,v);

//     // for(int i: v){
//     //     cout<<i<<" ";
//     // }


//     // maximumno(arr,size,index,maxi);

//     // cout<<maxi;
     
//     // recursioneven(arr,size,index,v);

//     // for(int i : v){
//     //     cout<<i<<" ";
//     // }
 

//     // minimum(arr,size,index,mini);

//     // cout<<mini;


//     // cout<<fib(7)<<endl;

//     return 0;
// }