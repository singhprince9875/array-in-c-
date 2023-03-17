/*#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    //for(int i=0;i<=size;i++){
       // cout<<array[size]<<endl;
    
   // }
    int i= 0;
    while(i<size);
    cout<<size<<endl;
}*/
/*#include<iostream>// taking input by using for loop
using namespace std;
int main(){
    char vowels[5];
    for(int i=0;i<=5;i++){
        cin>>vowels[i];
    }
    for(int i=0;i<=5;i++){
        cout<<vowels[i]<<endl;
}
}*/
// for each loop printing the arraay
/*#include<iostream>
using namespace std;
int main(){
    char vowels[5];
    for(char &element:vowels){
        cin>>element;
    }
    for(char &element:vowels){
        cout<<element<<" ";
    }
    
}*/
// sum of the  all elements of array
/*#include<iostream>
using namespace std;
int main(){
    int array[5]={3,4,5,6,7};
     int size = sizeof(array)/sizeof(array)[0];
     int sum = 0;
    for(int i = 0;i <= size;i++){
        sum+=array[i];}
    
    cout<<sum<<endl;
}*/
// maximum elements in array
/*#include<iostream>
using namespace std;
int main(){
    int array[4] = {3,7,9,11};
    int max =array[0];
    for(int i = 0;i<=4;i++){
        if(array[i]>max){
            max = array[i];}
    }
    cout<<max<<endl;*/

// minimum elements in array
/*#include<iostream>
using namespace std;
int main(){
    int a;

}*/
// call by value refrence operator code
/*#include<iostream>
using namespace std;

void sum(int&x,int&y){
x = x+5 ,x=10; y = y+6,y=8;
cout<<x+y;}
int main(){int a=4;int b =6;
sum(a,b);
cout<<(a,b);
}*/
// call by value function
/*#include<iostream>
using namespace std;
void sum(int x,int y){
    
    cout<<x+y;
}
int main(){
sum(34,56);// call by  value send the copy to the other code
}*/
// call by value
/*#include<iostream>
using namespace std;
int fun(int x ,int y){
    x = 20;
    y = 10;
}
int main(){
int x = 10,y = 20;
fun(x,y);
cout<<(x,y)<<endl;// the value of the actual parameter will be printed
}*/

// call by refrence operator in these all the actual and formal value of the paramter have same value of the function
/*#include<iostream>// any changes made to formal parameters will get reflected to actual parameters
using namespace std;

int fun(int*ptr1,int*ptr2){
    // we try to acess the value of variable  through pointer
    *ptr1=20;
    *ptr2=10;
}
int main(){
    int x = 10;
    int y = 20;
    fun(&x,&y);
    cout<<x<<y<<endl;

}*/
// example of the new function
/*#include<iostream>
using namespace std;
void addition(int&x,int&y){
    x = 5,y = 7;
    cout<<x+y<<endl;
}
int main(){int a=4;int b=6;
    addition(a,b);
    cout<<(a,b);
}*/

//TO take input from user and reverse the array
/*#include<iostream>
using namespace std;
int main(){int arr[5];
   for(int i = 0;i<=5;i++){
    cin>>arr[i];}
for(int j = 5;j>=0;j--){
    cout<<arr[j];
}*/


// to print the maximum number of the array
/*#include<iostream>
using namespace std;
int main(){
    int arr[4] = {3,4,5,6};
    int max = arr[0];
    for(int i = 0;i<=4;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
}*/
// to print the minimum number in array
/*#include<iostream>
using namespace std;
int main(){
    int arr[3] = {1,2,3};
    int min = arr[2];
    for(int i = 0;i<=3;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min;
}*/

// to display th address of the array
/*#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    cout<<&arr[0]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[i]<<endl;
}*/
// a program for differnce between odd and even number
/*#include<iostream>
using namespace std;
int main(){
    int arr[5]= {3,4,5,6,7};
    for (int i =0;i<=4;i++){
        if(arr[i]%2 == 0){
        cout<<"even number"<<arr[i]<<endl;}
        else{
            cout<<"odd number"<<arr[i]<<endl;
        }
}}*/
// a program for find the odd number and even number and store in array
#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[5] = {2,4,5,8,78};
    int arr2[5];
    int temp=0;
    for(int i = 0;i<=4;i++){
        if(arr[i]%2 == 0){
            temp++;
            arr2[temp]=arr[i];
            }
        }
        cout<<array(arr2);

    }
    