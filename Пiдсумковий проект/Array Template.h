#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

// fill the array with random numbers from 1 to 10
template <typename T>
void randArray(T arr[], int size, int a = 1, int b = 10) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (b - a + 1) + a;
    }
}

// print the array in the console
template <typename T>
void printArray(T arr[], int size, int w_cout = 5) {
    for (int i = 0; i < size; i++) {
        cout.width(w_cout);
        cout << arr[i];
    }
    cout << endl;
}

//знаходження індексу максимального елемента масиву
template <typename T>
int indexMaxElement(T arr[], int size)
{
    T max_elem = arr[0];
    int i_max = 0;
    for (int i = 0; i < size; i++) {
        if (max_elem < arr[i]) {
            max_elem = arr[i];
            i_max = i;
        }
    }
    return i_max;

}

//знаходження індексу мінімального елемента масиву
template <typename T>
int indexMinElement(T arr[], int size)
{
    T min_elem = arr[0];
    int i_min = 0;
    for (int i = 0; i < size; i++) {
        if (min_elem > arr[i]) {
            min_elem = arr[i];
            i_min = i;
        }
    }
    return i_min;
}

float addFractions(float a, float b) {
    return a + b;
}
float addFractions(int a1, int b1, int a2, int b2) {
    return (float)a1 / b1 + (float)a2 / b2;
}