#include <iostream>
using namespace std;

int main(){
    //Asking for size
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    int* salArray=new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i+1) << ": ";
        cin >> *(salArray+i);
    }
    // Apply increment formula
    for (int i = 0; i < size; i++) {
        *(salArray+i) = *(salArray+i) + *(salArray+i) / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray+i) << " ";
    }
    cout << endl;

    return 0;
}
