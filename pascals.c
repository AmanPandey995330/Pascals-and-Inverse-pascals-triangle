#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
 void printPascalTriangle(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j <= (n-i-2); j++){
            cout << "  ";
        }
        for(int j = 0; j <= i; j++){ // Use j instead of a
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << "  ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "No of rows in pascal series" ;
    cin >> n;
    printPascalTriangle(n);
}
 
