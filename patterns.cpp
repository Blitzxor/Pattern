#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//LEVEL 2
void print10(int n){
    for (int i =1;i<=n;i++){
        for (int j =0;j<=n-i-1;j++){
            cout<<" ";
        }
        for (int j =0; j<2*i-1;j++){
            cout<<"#";
        }
        for (int j =0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print11(int n){
    for (int i =n;i>=1;i--){
        for (int j =0;j<=n-i-1;j++){
            cout<<" ";
        }
        for (int j =0; j<2*i-1;j++){
            cout<<"#";
        }
        for (int j =0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
//or 
void print11_b(int n){
    for (int i =0;i<=n;i++){
        for (int j =0;j<i;j++){
            cout<<" ";
        }
        for (int j =0; j<2*n-(2*i-1);j++){
            cout<<"#";
        }
        for (int j =0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print12(int n){
    print10(n); //triangle
    print11(n); //inverse triangle
}
void print13(int n){
    int stars=0;
    for (int i =0;i<2*n-1;i++){
        stars=i;
        if (i>=n){
            stars=2*n-(i+2);
        }
        for (int j =0;j<=stars;j++){
            cout<<j;
        }
        
        cout<<endl;
    }
}
//or(n==5) i from 1to=9,j from 1 to =i ,or 1 to 2n-i (i=6 j will be 4 i.e 10-6 which is 2n -i
void print13_b(int n){
    int stars=0;
    for (int i =1;i<=2*n-1;i++){
        stars=i;
        if (i>=n){
            stars=2*n-i;
        }
        for (int j =1;j<=stars;j++){
            cout<<j;
        }
        
        cout<<endl;
    }
}
void print14(int n){
    int elm=9;
    for (int i =0;i<n;i++){
        if (i%2==0){
            elm=1;
        }
        for (int j =0;j<=i;j++){
            cout<<elm;
            elm=1-elm;
        }
        cout<<endl;
    }
}
void print15(int n){
    
    for (int i =1;i<=n;i++){
        for (int j =1;j<=i;j++){
            cout<<j;
        }
        for (int j =1;j<=2*(n-i);j++){
            cout<<" ";
        } 

        //here imp       
        //as i=1 me values 1 se 1 jayegi ,i=2 me values 2 se 1 jayegi , 
        //i=3 me j 3 to 1 jayega , and i=4 me j 4 to 1 jayega 
        for (int j =i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void print16(int n){
    int count=1;
    for (int i=1; i<=n;i++){
        for  (int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        
        }
        cout<<endl;

    }
}
//Differet coucome when incrementing coount with i iteration we need to print it and increment them orint it which is always be in the j iteration 
//here what are we doing is :
//we print count with j iteration and then incrementing when comes in next line so in line 1 ,count was 1 the line 2 count became 2 but print 1111 and 2222 in line 1 , 2 respectively ( j times )  
void print16_B(int n){
    int count=0;
    for (int i=1; i<=n;i++){
        for  (int j=1;j<=i;j++){
            cout<<count<<" ";
        
        }
        cout<<endl;
        count++;

    }
}

int main() {
    int t,n;
    cin>>t;
    for (int i =0;i<t;i++){
        int n;
        cin>>n;
        print16(n);
    }
    return 0;

}
