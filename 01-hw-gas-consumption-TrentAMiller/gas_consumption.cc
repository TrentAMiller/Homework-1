/*
 *        File: gas_consumption.cc
 *      Author: Trent Miller
 *        Date: 19-2-7
 * Description: 
 *
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {
   double x = 22.5; //gallons gas town;
   double y = 29.5; //gallons gas highway;
   double Miles_Town;
   double Miles_Highway;
   cout <<"Enter the number of miles driven in town: ";
   cin >> Miles_Town; //Stand for miles driven in town;
   cout <<"Enter the number of miles driven on the highway: ";
   cin >> Miles_Highway; //Number of miles driven on highway input;
   cout << "Gallons of gas used in town is: " << Miles_Town/x << endl;
   cout << "Gallons of gas used on the highway is: " << Miles_Highway/y <<endl;
   cout << "Total miles driven: " <<Miles_Highway + Miles_Town << endl;
   cout << "Total gas consumption: " <<(Miles_Highway/y) + (Miles_Town/x) << endl;
   cout << "Average mpg for the trip: " <<(Miles_Highway + Miles_Town) + ((Miles_Highway/y + Miles_Town/x)) <<endl;
   


   /*add code*/
   return 0;
}// main
