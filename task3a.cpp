#include <iostream>
using namespace std;
void analyze_pointer(int* ptr){
    cout<<"Address stored by pointer is: "<<ptr<<endl;
    cout<<"Value stored by variable is: "<<*ptr<<endl;
}
int main(){
    int x;
    x=20;
    int* ptr=&x;
    analyze_pointer(ptr);
    return 0;   
}