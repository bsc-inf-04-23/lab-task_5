#include <iostream>
using namespace std;
int validation(){
    int input;
    cin>> input;
    while(true)
        if(!cin.good()){
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"Sorry, you have entered an invalid number, please try again"<< endl;
            cin>> input;
                        }
        else if(input <= 5 || input >= 10){
            cout<<"You entered "<< input<< ". Please, enter an integer between 5 and 10 :";
                cin>> input;
        }
        else{
            break;
        }

    return input;
}

int main(){
int integerValue;
cout<< "Enter an integer value between 5 and 10 :";
integerValue = validation();

    cout<< "Your input value is("<< integerValue<<") and your value has been accepted"<< endl;

    return 0;
}