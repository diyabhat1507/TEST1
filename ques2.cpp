#include <iostream>
#include <list>
#include <limits>
using namespace std;
int main() {
    list<int> numbers;
    int num,count=0;
    cout<<"Enter the number of elements: ";
    cin>>count;
    cout<<"Enter the elements: ";
    for (int i=0;i<count;i++) {
        cin>>num;
        numbers.push_back(num);
    }
    if (numbers.empty()) {
        cout<<"The list is empty."<<endl;
        return 0;
    }
    int max_element=numeric_limits<int>::min();
    for (int num:numbers) {
        if (num>max_element) {
            max_element=num;
        }
    }
    cout << "The list contains: ";
    for (int num:numbers){
        cout<<num<<"\n";
    }
    cout<<"The maximum element is: "<<max_element<<endl;
    return 0;
}
