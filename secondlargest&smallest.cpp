#include <vector>
#include <climits>
using namespace std;
int findSecondLargest(int n, vector<int> &a){
    if(n<2) return -1;
     int largest = a[0];
    int secondLargest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > largest){
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > secondLargest){
             secondLargest = a[i];
        }
    }
    if(secondLargest == INT_MIN) return -1;
    return secondLargest;
}

int findSecondSmallest(int n, vector<int> &a){
    if(n<2) return -1;
    int smallest = a[0];
    int secondSmallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] < smallest){
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < secondSmallest){
            secondSmallest = a[i];
        }
    }
    if(secondSmallest == INT_MAX) return -1;
    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = findSecondLargest(n, a);
    int ssmallest = findSecondSmallest(n, a);
    return {slargest, ssmallest};
}
