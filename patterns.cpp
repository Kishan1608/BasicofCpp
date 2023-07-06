#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i+1; k+=1){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n - (2*i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    pattern7(n/2);
    pattern8(n/2);
}

void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n){
            stars = 2*n - i;
        }
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;

        for(int j=0; j<=i; j++){
            cout<< start;
            start = 1 - start;
        }

        cout << endl;
    }
}

void pattern12(int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<j+1;
        }
        for(int j=0; j<2*n - (2*i+1); j++){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch< 'A'+n-i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    int ascii = 65;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(ascii)<<" ";
        }
        ascii++;
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0; i<n; i++){
        char ch = 'A';
        ch+=n-i-1;
        for(int j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*n-2*i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern20(int n){
    int counter = 1;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        int spaces = 2*n - 2*i;
        if(i>n){
            stars = 2*n - i;
            spaces = 2*counter;
            counter++;
        }

        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        for(int j=0; j<spaces; j++){
            cout<<" ";    
        }
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || j== 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int bottom = (2*n - 2) - i;
            cout<<(n - min(min(top,bottom),min(right,left))) << " ";
        }
        cout<<endl;
    }
}


int main(){
    int num;
    cin>>num;
    // pattern1(num);
    // pattern2(num);
    // pattern3(num);
    // pattern4(num);
    // pattern5(num);
    // pattern6(num);
    // pattern7(num);
    // pattern8(num);
    // pattern9(num);
    // pattern10(num);
    // pattern11(num);
    // pattern12(num);
    // pattern13(num);
    // pattern14(num);
    // pattern15(num);
    // pattern16(num);
    // pattern17(num);
    // pattern18(num);
    // pattern19(num);
    // pattern20(num);
    // pattern21(num);
    pattern22(num);
    return 0;
}