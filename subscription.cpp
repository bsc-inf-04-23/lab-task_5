#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int daysuntilExpiration = rand() % 11;
    cout<< "The random number generated is " << daysuntilExpiration << endl;
   if(daysuntilExpiration <= 10 && daysuntilExpiration > 5){
       cout <<"Your subscription will expire soon. Renew now!" ;
    }
    
    else if( daysuntilExpiration <= 5){
    cout << "Your subscription expires in " << daysuntilExpiration << " days"<< endl;
    cout<< "Renew now and save 10%!";
    }
    else if(daysuntilExpiration == 1){
        cout << "Your subscription expires within a day! \n" <<
                "Renew now and save 20%!"<< endl;
    }
    else if (daysuntilExpiration == 0){
        cout <<"Your subscription has expired."<< endl;
    }
    else{
        cout<<"You have an active subscription."<< endl;
    } 
    return 0;
}