////
////  lower_bound.cpp
////  problem_solving
////
////  Created by youkchangsu on 2018. 7. 19..
////  Copyright © 2018년 ycs. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//int lower_bound(int * arr, int arr_size, int num){
//  int low=0;
//  int high=arr_size-1;
//  
//  while (low<=high) {
//    if(low==high)
//      break;
//    int mid = (low+high)/2;
//    if(num <= arr[mid]){
//      high = mid;
//    } else {
//      low = mid+1;
//    }
//  }
//  return low;
//}
//
//int main(void){
//  
//  int test[20] = {-200, -120, -8, -2, 0, 1,4,7,9,11,13,15,18, 22, 50, 90, 110, 130, 1902, 3000};
//  
//  cout << "pos " << lower_bound(test, 20, -900) << endl;
//  cout << "pos " << lower_bound(test, 20, -90)  << endl;
//  cout << "pos " << lower_bound(test, 20, 1)    << endl;
//  cout << "pos " << lower_bound(test, 20, 70)   << endl;
//  cout << "pos " << lower_bound(test, 20, 1020) << endl;
//  cout << "pos " << lower_bound(test, 20, 5000) << endl;
//  
//  return 0;
//}
