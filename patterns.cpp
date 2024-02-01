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
//LVL 3
void print17(int n){
    for (int i =0 ; i<n;i++){
        for (char ch ='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void print18(int n){
    for (int i =0;i<n;i++){
        //logic => a to a+4 (A-BCDE), a to a+3 (A-BCD), ato a +2
        for (char ch ='A';ch<='A'+n-i-1;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

//print 19 tryting :( failed  cuz we want to pritn ch i times and in next i^th iterator we incremnt only ch 
//concept of scope =>we cant access the varables created in for out side of it(here ch) ;
// void print18(int n){
//     for (int i =0;i<n;i++){
//         //logic => a to a+4 (A-BCDE), a to a+3 (A-BCD), ato a +2
//         for (char ch ='A';ch<='A'+n-i-1;ch++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }
//so instead we do :
void print19(int n){
    char ch='A';
    for (int i =0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<ch;
        }
        //after printing ch i times when moving to next (i.e endl) befor coming to next line we increment the ch from a to B 
        ch++;
        cout<<endl;
    }
}

void print20(int n ){
    // not doing  init here ??why ??
    //char ch='A';
    //ANS=>> as we want ki every ith time ch 'A' se init hojaye so jab j iterator chale to vo a to whaterver tk chale
    for (int i =0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //jab bhi jth iterator start honw wala usse peehle we init ch 'A'
        //odd 2i+1 
        char ch='A';
        for (int j=0;j<2*i+1;j++){
            
            cout<<ch;
            if (j>=i) ch--;
            else ch++;
            //(i==0)0 to <1 =>,(i==1)0to<3 => when j=1 or 1 se greater hogi we doing c-- onwards ,0t05 when j=2 we print then doing c-- onwards, oto7 when j =3

        }
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print21(int n){
    for (int i =0 ; i<n;i++){
        char ch ='A'+n-i-1; //starting with correct char when starting the j th itereator 
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch++;

        }
        cout<<endl;
    }
}
void print22(int n ){
    for (int i =0;i<n;i++){
        for (int j =0;j<n-i;j++){
         cout<<"*";

        }
        for (int j=0;j<2*i;j++){
            cout<<" ";
        }
        //for doing same task we can also do 
        for (int j =0;j<=n-i-1;j++){
         cout<<"*";

        }
        cout<<endl;
    }
    //for doing same we can do just j (0to =0) and j(0 to 8 i.e  2(5-0-1) => 2(n-i-1))
    // for (int i =0;i<n;i++){
    //     for (int j =0;j<=i;j++){
    //         cout<<"*";

    //     }
    //     for (int j=0;j<2*( n-i-1) ;j++){
    //         cout<<" ";
    //     }
    //     for (int j =0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //method 2 of doing same usinf inistialist the spaces and decrementing by 2 or incrementign by 2 for above case
    int spaces=2*n-2; //ie.8 for n==5;
    for (int i =0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout<<"*";

        }
        for (int j=0;j<spaces;j++){
            cout<<" ";
        }
        for (int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        // before entering in next ith iterator we do decrement no. of spaces j times printed by 2
        spaces-=2;
    }
}
void print23(int n){
    int spaces =2*n-2;
    for (int i =1;i<=2*n-1;i++){
        int stars=i;
        if (i>n) stars = 2*n-i;
        
        for (int j =1;j<=stars;j++){
            cout<<"#";
        }        
        for (int j =1;j<=spaces;j++){
            cout<<" ";
        }
        for (int j =1;j<=stars;j++){
            cout<<"#";
        }
        cout<<endl;
        if (i>=n) spaces +=2;
        else spaces-=2;
    }
}
void print24(int n){
    int starting =0;
    int ending=n;
    for (int i =1;i<=ending;i++){
        for (int j =1;j<=ending;j++){
            if (i==starting || j==starting || i==ending||j==ending){
                cout<<"#";
            }
            else cout<<" ";
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
        print24(n);
    }
    return 0;

}
