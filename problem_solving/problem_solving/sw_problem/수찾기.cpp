//#include <stdio.h>
//#define MAX_TABLE 100007
//typedef unsigned long ul;
//
//struct Integer{
//  ul num;
//  Integer * next;
//};
//
//Integer hash_table[MAX_TABLE];
//Integer db[MAX_TABLE];
//ul idx;
//ul N, M;
//
//ul hashing(ul key){
//  return key % MAX_TABLE;
//}
//
//void insert(ul num){
//  ul key = hashing(num);
//  db[idx].num = num;
//  
//  if(!hash_table[key].next){
//    hash_table[key].next = &db[idx];
//    idx++;
//    return;
//  }
//  
//  Integer * ptr = hash_table[key].next;
//  while (ptr->next) {
//    ptr = ptr->next;
//  }
//  
//  ptr->next = &db[idx];
//  idx++;
//}
//
//ul find(ul num){
//  ul key = hashing(num);
//  Integer * ptr = hash_table[key].next;
//  while (ptr) {
//    if(ptr->num == num){
//      return 1;
//    }
//    ptr = ptr->next;
//  }
//  return 0;
//}
//
//int main(void){
//  
//  freopen("/Users/youk/workspace/Problem_Solving/problem_solving/problem_solving/in2.txt", "r", stdin);
//  
//  scanf("%lu", &N);
//  while (N--) {
//    ul num;
//    scanf("%lu", &num);
//    insert(num);
//  }
//  
//  
//  scanf("%lu", &M);
//  while (M--) {
//    ul num;
//    scanf("%lu", &num);
//    printf("%lu\n", find(num));
//  }
//  
//  return 0;
//}
