#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int daysuntilExpiration = rand() % 11;
    
    cout<< "The random number generated is " << daysuntilExpiration << endl;

    switch(daysuntilExpiration){
        case 0 :
        cout <<"Your subscription has expired."<< endl;
        break;

        case 1 :
                cout << "Your subscription expires within a day! \n" <<
                    "Renew now and save 20%!"<< endl;
            break;

        case 2 :
        case 3 :
        case 4 :
        case 5 : {
                cout << "Your subscription expires in " << daysuntilExpiration << " days"<< endl;
                cout<< "Renew now and save 10%!";}
            break;
        case 6 :
        case 7 :
        case 8 :
        case 9 :
        case 10 :
        cout <<"Your subscription will expire soon. Renew now!" ; 
        break;
    
        default :
        cout<<"You have an active subscription."<< endl;
    } 
    return 0;
}