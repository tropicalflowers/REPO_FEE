#include <iostream>
using namespace std;
int calculate(int a, int b){
    return a+b;
}
float calculate(float a, float b){
    return a+b;
}
float calculate(float a, float b, float c){
    float sum = a + b + c;
    return sum / 3;
}
int main(){
    int int1, int2;
    float float1, float2, float3;

    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Sum of integers: " << calculate(int1, int2) << endl;

    cout << "Enter two floats: ";
    cin >> float1 >> float2;
    cout << "Sum of floats: " << calculate(float1, float2) << endl;

    cout << "Enter three floats: ";
    cin >> float1 >> float2 >> float3;
    cout << "Average of three floats: " << calculate(float1, float2, float3) << endl;

    return 0;
}