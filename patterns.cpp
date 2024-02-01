#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print1(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
void print2(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print4(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print5(int n){
    for (int i =1;i<=n;i++){
        for (int j =0;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print6(int n){
    for (int i =1;i<=n;i++){
        for (int j =0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print7(int n){
    for (int i =1;i<=n;i++){
        for (int j =0;j<n-i+1;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
void print8(int n){
    for (int i =1;i<=n;i++){
        for (int j =0;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print9(int n){
    for (int i =1;i<=n;i++){
        for (int j =0;j<n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print_imp1(int n){
    for (int i=0;i<2*n-1;i++){
        for (int j=0;j<2*n-1;j++){
            int ending=(2*n-2);
            int top_dist,bottom_dist,left_dist,right_dist;
            top_dist=i;
            bottom_dist=j;
            left_dist=ending-j;
            right_dist=ending -i;
            cout<<n-min(min(top_dist,bottom_dist),min(left_dist,right_dist))<<" ";

        }
        cout<<endl;
    }
}
int main() {
    int t,n;
    cin>>t;
    for (int i =0;i<t;i++){
        int n;
        cin>>n;
        print_imp1(n);
    }
    return 0;

}
