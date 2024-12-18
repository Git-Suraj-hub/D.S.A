#include <iostream>
using namespace std;

// Function to find the sum of elements in the array
int sum(int arr[], int size) {  
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to check if a mid value is valid
bool isValid(int mid, int m, int arr[], int size) {
    int student = 1;
    int page = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i]>mid){
            return false;
        }
        if(page + arr[i] <= mid) {
            page += arr[i];
        } else {
            student++;
            page = arr[i];
        }
    }
    return student <= m;
}

// Function to allocate books to students
int bookAllocate(int arr[], int m, int size) {
    if(m>size){
        return -1;
    }
    int start = 0;
    int end = sum(arr, size);
    int ans = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(isValid(mid, m, arr, size)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10,20,30};
    int m = 2;  // m is the total number of students
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = bookAllocate(arr, m, size);
    cout << "Minimum number of pages: " << result << endl;
    return 0;
}
