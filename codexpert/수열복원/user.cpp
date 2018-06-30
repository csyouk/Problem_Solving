//extern int orderCheck(int left, int right);
//
//const int LM = (int)1e5 + 5;
//int idx[LM], T[LM];
//
//void mergeSort(int * arr, int s, int e){
//  if(s==e) return;
//  int m = (s+e)/2;
//  int i = s;
//  int j = m+1;
//  int k = s;
//  mergeSort(arr, s, m);  mergeSort(arr, m+1, e);
//  
//  while (i <= m || j <= e) {
//    if(e < j) T[k++] = arr[i++];
//    else if(m < i) T[k++] = arr[j++];
//    else if(orderCheck(arr[i], arr[j])) T[k++] = arr[i++];
//    else T[k++] = arr[j++];
//  }
//  
//  for(i=s;i<=e;i++) arr[i] = T[i];
//}
//
//
//void array_restore(int arrCount, int dat[]){
//  int i; /// idx[] : org[]'s index
//  for (i = 1; i <= arrCount; ++i) idx[i] = i - 1;
//  mergeSort(idx, 1, arrCount);
//  for (i = 1; i <= arrCount; ++i) dat[idx[i]] = i;
//}
//
//
