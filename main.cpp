#include <iostream>
using namespace std;
//The code is already stored in a standard library called vector.
int main(){
    int capacity = 5;
    int* numbers = new int[capacity];
    int entities = 0;
    while(true){
        cout<<"Numbers: ";
        cin >> numbers[entities];
        if (cin.fail()) break;
        entities++;
        if(entities == capacity){
            capacity *= 2;
            int* numbersAlt = new int[capacity];
            for(int i=0;i<entities;i++){
                numbersAlt[i] = numbers[i];
            delete[] numbers;
            numbers = numbersAlt;
        }
    }
    for(int i = 0;i<entities;i++)
        cout<<numbers[i]<<endl;
    delete[] numbers;
    return 0;


}}