#include <iostream>
using namespace std;

int main(){

    ///finding 1 to n numbers using while loop
    int n; //10
    cout << "Enter the Nth number";
    cin>>n;

    //number starting from 1
    int i=1;

    while (i<=n){
        cout << i << endl; //if the condtion is true, then it will execute this cmnd
        i=i+1;
    }
//finding the sum of 1 to a
    int sum=0;
    int a=1;
    while (a<=n){
        sum=sum+a;
        a=a+1;
    }
  cout << "the sum of 1 to n is:" <<sum << endl;


  //finding the sum of all even numbers from 1 to n

  int n_even;
  cout<<" Give the n of even num"; cin>> n_even;
  int sum_even=0;
  int b=2;

  while (b<=n_even){
     if (b%2==0){
        sum_even+=b;
        b=b+2;
     }
  }
  cout << "the sum of even num of n is: " <<sum_even << endl;

   //finding the prime numbers
    int p=2;
    while( p<n){
        if (p%2==0){
            cout<<"Not Prime number for " << p <<endl;

        }
        else{
            cout << "Prime number for "<< p << endl;
        }
        p=p+1;
    }
}