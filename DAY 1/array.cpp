#include <iostream>
using namespace std;

void traversal(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertion(int a[], int n, int k, int x) {
    for (int i = n; i > k-1; i--) {
        a[i] = a[i - 1];
    }
    a[k-1] = x;
    n++;

    cout << "Array after insertion:" << endl;
    traversal(a, n);
}

void deletion(int a[], int n, int x) {
   
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            for (int j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
        break; 
        }
    }

    cout << "Array after deletion:" << endl;
    traversal(a, n);
}

void search(int a[],int n, int item){
    cout<<"element to be search "<<item<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==item){
            cout<<"element found at position "<<i+1<<endl;
        }
    }
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 5, 6};

    cout << "Original array:" << endl;
    traversal(arr, size);

    insertion(arr, size, 4, 4);
    
    deletion(arr,size,4);
    
    search(arr,size,5);

    return 0;
}
