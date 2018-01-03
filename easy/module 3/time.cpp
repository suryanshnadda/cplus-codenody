//current time and date
#include<iostream>
#include<ctime>
using namespace std;
int main()
{

   time_t b = time(0)
   char* a = ctime(&b);
   cout << "date and time is: " << a << endl;
}
