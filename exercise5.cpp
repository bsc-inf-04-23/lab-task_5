#include <iostream>
using namespace std;

double AreaOfTriangle(double paramheight, double parambase);
double AreaOfRectangle(double paramlength, double paramwidth);
double AreaOfSquare(double paramside);
int validation();

int main(){
    double height;
    double base;
    double length;
    double width;
    double side;
    int choice;

        do{
        cout<<"Please select the area of the shape to calculate"<< endl;
        cout<<"1. Square"<<endl;
        cout<<"2. Rectangle"<<endl;
        cout<<"3. Triangle"<<endl;
        cout<<"4. Quit program"<<endl;
        cout<<endl;
        cout<<"Enter selection: ";
          choice = validation();
    
          switch(choice){
                    
                case 1:{
                    cout<<"Enter the side of the square: ";
                    cin >> side;
                    double areaOfSquare = AreaOfSquare(side);
                    cout<< "The area of the square is "<< areaOfSquare<< endl;
                
                    break;}
                
                    
              case 2:{
                         cout<<"Enter the length of the rectangle: ";
                             cin >> length;
                         cout<<"Enter the width of the rectangle: ";
                            cin>> width;
                         double areaOfRectangle = AreaOfRectangle(length, width);
                         cout<< "The area of the rectangle is "<< areaOfRectangle<< endl;
                         break;
              }
                        
                case 3:{
                    cout<<"Enter the height of the triangle: ";
                    cin >> height;
                    cout<<"Enter the base of the triangle: ";
                    cin>> base;
                      double result =  AreaOfTriangle(height, base);
                    cout<< "The area of the triangle is "<< result<< endl;
                    break;
                }

            }
       }
            while(choice != 4);
        }

// function definition
int validation(){
        int choice;
        cin>> choice;
        while (true){
            if(!cin.good()){
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout<<"Your input was: "<< choice<< " which is an invalid input \n"<< "please enter a valid input!!!"<< endl;
                cin>> choice;
         }
            else if (choice < 1 || choice >4 ){
                cout<<"Your input was: "<< choice<< " which is an invalid input \n"<< "please enter a valid input!!!"<< endl;
                break;
            }
                else{
                    break;
                }
            
  }
    return choice;
            
    }

double AreaOfTriangle(double paramheight, double parambase){
   double result =  (paramheight * parambase);
        
    return result ;
}

double AreaOfRectangle(double paramlength, double paramwidth){
    double result =  (paramlength* paramwidth);
}
double AreaOfSquare(double paramside){
    double result = paramside * paramside;
    return result;
}

