 /*#include<iostream>
 using namespace std;

 int main(){
    int day;

    cout<<"What is the day today?"<<endl;
    cin>>day;

    switch(day){
        case 1: cout<<"Today is Sunday";
        break;
        case 2: cout<<"Today is Monday";
        break;
        case 3: cout<<"Today is Tuesday";
        break;
        case 4: cout<<"Today is Wednesday";
        break;
        case 5: cout<<"Today is Thursday";
        break;
        case 6: cout<<"Today is Friday";
        break;
        case 7: cout<<"Today is Saturday";
        //break;
        default:cout<<"Check your input";


    }
 }*/







 //EXITING A INFINITE LOOP
 //(1) BY USING FLAG

 /*#include <iostream>
using namespace std;

int main() {
    bool running = true;
    
    while (running) {
        int choice;
        cout << "Enter 1 to continue, 0 to exit: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Still running...\n";
                break;  // only breaks the switch
            case 0:
                running = false; // exit loop next iteration
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }

    cout << "Loop exited.\n";
    return 0;
}*/








//(2)USING EXIT()
//IT IS USED UNDER LIBRARY- stdlib

/*#include <iostream>
#include <cstdlib>  // for exit()
using namespace std;

int main() {
    while (true) {
        int choice;
        cout << "Enter 1 to continue, 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Still running...\n";
                break;
            case 0:
                cout << "Exiting program...\n";
                exit(0);   // exits program completely
            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}*/










//CALCULATOR
/*#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"ENTER A"<<endl;
    cin>>a;

    cout<<"ENTER B"<<endl;
    cin>>b;

    char op;
    cout<<"WHICH OPERATION TO PERFORM"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<< a+b;
        break;
    case '-':
        cout<< a-b;
        break;
    case '/':
        cout<< a/b;
        break;        
    case '*':
        cout<< a*b;
        break;
    default:
        break;
    }

}
*/






//FUNCTION FOR NCR
/*
#include <iostream>
using namespace std;

int fact(int n){
    int fact=1;

    for(int i =1; i<=n; i++){fact=i*fact;}
    return fact;

}

int ncr(int n, int r){
    int num = fact(n);

    int d= fact(r) * fact(n-r);

    int ans = num/d;

    return ans;

}

int main(){
    int n,r;

    cout<<"Enter n";
    cin>>n;

    cout<<"Enter r";
    cin>>r;

    cout<<"value of nCr is " << ncr(n,r) <<endl;
}*/






//IS PRIME
/*
#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2; i<n ; i++){
        if(n%i == 0){
            cout<< "It is not prime"<<endl;
            break;
        
        }
        else{
            cout<<"It is prime"<<endl;
            break;
        }
        

        }    }



int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    isprime(n);

}*/
