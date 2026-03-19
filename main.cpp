//      **************************************************
//      Find the min, max among three values
//      Display three values in ascending order  min, other, max
//     **************************************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    

    // TODO: Find min, max, and med among num1, num2, num3
    if (num1 < num2 && num1 < num3){
        if (num2 < num3){
            min = num1; med = num2; max = num3;
        }
        else{
            min = num1; med = num3; max = num2;
        }

    }
    if (num1 < num2 && num3 < num1){
        min = num3; med = num1; max = num2;
    }
    if ( !(num1 < num2) && num2 < num3){
        if (num1 < num3){
            min = num2; med = num1; max = num3;
        }
        else{
            min = num2; med = num3; max = num1;
        }
    }
    if ( !(num1 < num2) && num3 < num2){
        num3 = min; num2 = med; num1 = max;
    }
    

    cout << min << " " << med << " " << max << endl;
}
