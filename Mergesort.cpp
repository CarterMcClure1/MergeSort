#include "mergesort.h"
#include <vector>
using namespace std;

MergeSort::MergeSort(vector<string> arr) {
    array = arr;
    tempArray.resize(arr.size());
}

void MergeSort::sort() {
    mergeSort(0, array.size() - 1);
}

void MergeSort::mergeSort(int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(left, mid);
        mergeSort(mid + 1, right);

        merge(left, mid, right);
    }
}

void MergeSort::merge(int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (array[i] <= array[j]) {
            tempArray[k] = array[i];
            i++;
        } else {
            tempArray[k] = array[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        tempArray[k] = array[i];
        i++;
        k++;
    }

    while (j <= right) {
        tempArray[k] = array[j];
        j++;
        k++;
    }

    for (int i = left; i <= right; i++) {
        array[i] = tempArray[i];
    }
}

void MergeSort::printArray() {
    for (int i = 0; i < array.size(); ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

vector<string> MergeSort::getSortedArray() {
    return array;
}
