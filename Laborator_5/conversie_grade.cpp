// program care converteste temperaturile in grade Fahrneheit

#include <iostream>
using namespace std;

int main()
{
    const float temp_c = 19.3;
    float temp_f;

    temp_f = 9 * temp_c/ 5 + 32;

    cout << " Temperatura in grade Celsius este : " << temp_c << endl;

    cout <<" Temperatura in grade Fahrenheit este : " << temp_f;
    return 0;
}
