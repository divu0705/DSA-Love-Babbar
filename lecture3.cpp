/*
//Compare krna h

#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter a and b respectively"<<endl;
    cin>>a;
    cin>>b;

    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if (b>a)
    { cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both are equal";
    }
    
    
}
    */










    /*
   KYA H? POSITIVE NEGATIVE ZERO
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a"<<endl;
    cin>>a;
    
    if(a>0){
        cout<<"POSITIVE"<<endl;  }
        else if (a<0)
        {
            cout<<"NEGATIVE"<<endl;
        }
        else{
            cout<<"ZERO"<<endl;
        }

        
}
        */










  /*      //lowecase,uppercase,numeric
#include <iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter a"<<endl;
    cin>>a;
    
    if(a>=65 && a<=90){
        cout<<"UPPERCASE"<<endl;  }
        else if (a>=97 && a<=122)
        {
            cout<<"LOWERCASE"<<endl;
        }
        else if(a>=48 && a<=57){
            cout<<"NUMERIC"<<endl;
        }

        
}  */











/*
//print 1 to n
#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}  

*/









/*
//sum from 1 to N
#include <iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    
    while(i<=n){
        sum=sum+i;
        i++;
    }

    cout<<"sum is: "<<sum<<endl;

}  */










/*
//prime or not
#include <iostream>
using namespace std;

int main(){
    int n,i=2;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    
    while(i<n){
        if(n%i==0){
            cout<<"not prime";
            break;}
            else{
                i++;
            }
            if(i==n){
                cout<<"prime";
            }
        }
    } */

    













/*
//patterns
***
***
***
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

} */











/*//pattern  
//111
//222
//333 
#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
       
        cout<<endl;
        i++;
    }

}  */

















/*//Pattern
//1234
//1234
//1234
//1234
#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
            k++;
            
        }
        
        cout<<endl;
        i++;
        
    }

}  */













/*
//321
//321
//321
#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
            k++;
            
        }
        
        cout<<endl;
        i++;
        
    }

}  */












/*
//123
//456
//789
#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<k<<" ";
            j++;
            k++;
            
        }
        
        cout<<endl;
        i++;
        
    }

}  */







/*
//*
//**
//***
//****
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
           
            
            
        }
        
        cout<<endl;
        i++;
        
    }

}  */








/*

//1
//22
//333
//4444
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
            
           
            
            
        }
        
        cout<<endl;
        i++;
        
    }

}  
*/














/*

//1
//23
//456
#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k;
            j++;
            k++;
           
            
            
        }
        
        cout<<endl;
        i++;
        
    }

}  */










/*
//1
//23
//345
//4567
//without using k bhi try kro
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
            
                 
            
            
        }
        
        cout<<endl;
        i++;
     
        
    }

}  */








/*
//1
//21
//321
//4321
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k--;
           
            
            
        }
        
        cout<<endl;
        i++;
        
    }

}  */








/*
//AAA
//BBB
//CCC
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    char ch='A';

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
            
           
            
            
        }
        ch++;
        cout<<endl;
        i++;
        
    }

}  */










/*
//1
//12
//123
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    char ch='A';

    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
            
           
            
            
        }
        ch++;
        cout<<endl;
        i++;
        
    }

} */




/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    int flip= ~n;
    cout<<flip;

}
*/