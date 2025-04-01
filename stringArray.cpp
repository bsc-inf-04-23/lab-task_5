#include <iostream>
using namespace std;

int main(){
    string arrayString [9] = {"B123","C234","A345","C15", "B177","G3003","G3003","C235","B179"};

    for(int i = 0; i < 9; i++){
        /* Since we want to be looping through the each element in the array, we use char c to loop through the elements
        of the string. */
        for(char check : arrayString[i]){
            /*To check if the elements has character 'B' in the elements of the array, we use the 'if statement' */
            if (check == 'B')
                cout << arrayString [i]<< endl;
            }
    }
}