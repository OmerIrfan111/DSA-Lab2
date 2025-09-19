#include <iostream>
using namespace std;
void analyze_pointer(int* ptr){
    cout<<"Address stored by pointer is: "<<ptr<<endl;
    cout<<"Value stored by variable is: "<<*ptr<<endl;
}
int main(){
    int* ptr=new int;
    *ptr=60;
    analyze_pointer(ptr);
    return 0;   
}