#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // input of the numbers
    int num1{2};`
    int num2{3};
    int num3{7};
    int num4{5};
    int num5{4};
    int num6{6};
    //Finding the average of the numbers

    double num_sum{};
    double average{};
    int nums {6};
    double deviation_squared_sum{};
    double average_deviation_squared_sum{};
    double Standard_Deviation{};

    num_sum = num1 + num2 + num3 + num4 + num5 + num6;
    cout<< "sum"<< num_sum<<endl;

    average = num_sum / nums;
    cout<< "average"<<average<<endl;

    deviation_squared_sum = pow(num1 - average , 2) + pow(num2 - average, 2) + pow(num3 - average , 2) + pow(num4 - average , 2) + pow(num5 - average, 2) + pow(num6 - average , 2);

    cout<< "deviation_squared_sum" <<deviation_squared_sum<<endl;

    average_deviation_squared_sum = deviation_squared_sum / nums;

    cout<< "average_deviation_squared "<< average_deviation_squared_sum<<endl;

    Standard_Deviation = sqrt(average_deviation_squared_sum);

    cout<<"The Standard Deviation is "<<Standard_Deviation<<endl;

    return 0;
}
