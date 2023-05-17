// Online C++ compiler to run C++ program online
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
int speed;

public:
 int getSpeed()
 { 
     return speed; 
 }

 void accelerate ()
 {
     speed += 10;
 }

 void brake()
 {
 if ( speed >= 10)
 speed -=10;
 else
 speed = 0;
 }

};

int main() {
 Car car_obj;
 string customer="Keerthana";
 int release_year=2019;
 int speed;
 speed = 00;
 cout<<"Customer name: " <<customer<<"\n";
 cout<<"Release year: "<<release_year<<"\n";
 cout << "Car has started ...\n\n";
 for (int run =0; run < 5; run++)
 {

 car_obj.accelerate();
 cout << " current speed: " << car_obj.getSpeed() << "mph.\n";
 }
 cout << endl;


 cout << "After break... " << endl;
 for(int brk = 0; brk < 5; brk++)
 {
 car_obj.brake();
 cout << " Current speed: " << car_obj.getSpeed() << "mph.\n";
}

 return 0;
}