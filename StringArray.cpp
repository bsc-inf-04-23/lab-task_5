#include <iostream>
using namespace std;

int main(){
    string arrayString [9] = {"B123","C234","A345","C15", "B177","G3003","G3003","C235","B179"};

    for(int i = 0; i < 9; i++){
        // Since we want to be 
        for(char b : arrayString[i]){
            if (b == 'B')
                cout << arrayString [i]<< endl;
            }
    }
}