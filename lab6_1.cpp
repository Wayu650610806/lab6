#include<iostream>
using namespace std;

int main(){
    int num=1;
    int odd=0;
    int even=0;
    while(num!=0){
        cout << "Enter an integer: ";
        cin >> num;
        if (num%2 == 0&&num!=00){
            even++;
        }
        if(num%2 !=0){
            odd++;
        }
    }
    
    cout << "#Even numbers = "<< even <<"\n";
    cout << "#Odd numbers = "<<odd <<"\n";
    return 0;
}
