#ifndef MERGESORT_H
#define MERGESORT_H
#include <vector>
using namespace std;

#pragma once

class MergeSort {
public:
    MergeSort(vector<string> arr);
    void sort();
    void printArray();
    vector<string> getSortedArray();
private:
    vector<string> array;
    vector<string> tempArray;
    void mergeSort(int left, int right);
    void merge(int left, int mid, int right);
};

#endif
