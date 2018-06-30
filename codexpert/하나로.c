//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//
//#define ULL unsigned long long
//#define SIZE 1000
//#define INF 100000000000000
//#define LEN(X,Y) ((X)>(Y)?((X)-(Y)):((Y)-(X)))
//#define SQARE(X) ((X)*(X))
//
//typedef struct
//{
//  int s,e;
//}VERTEX;
//
//VERTEX V[SIZE];
//int visited[SIZE];
//double cost[SIZE];
//
//int N;
//float E;
//
//
//void Prim(){
//  int i, j;
//  ULL L;
//  ULL min;
//  int node = 0;
//  visited[node] = 1; cost[node] = 0;
//  
//  for (i = 0; i < N-1; i++) {
//    for (j = 0; j < N; j++) {
//      if(visited[j]) continue;
//      L = SQARE(V[node].s - V[j].s) + SQARE(V[node].e - V[j].e);
//      if(cost[j] >  E * L){
//        cost[j] = E * L;
//      }
//    }
//    
//    min = INF;
//    for (j = 0; j < N; j++) {
//      if(visited[j]) continue;
//      if(cost[j] == INF) continue;
//      if(min > cost[j]){
//        min = cost[j];
//        node = j;
//      }
//    }
//    
//    visited[node] = 1;
//    
//  }
//  
//}
//
//int main(void){
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  int TC,t;
//  double sol;
//  
//  scanf("%d", &TC);
//  
//  for (t=1; t<=TC; t++) {
//    scanf("%d", &N);
//    
//    sol = 0;
//    
//    for (int i=0; i<SIZE; i++){
//      cost[i] = (double)INF;
//      visited[i] = 0;
//    }
//    
//    
//    for (int i=0; i<N; i++)
//      scanf("%d", &V[i].s);
//    
//    for (int i=0; i<N; i++)
//      scanf("%d", &V[i].e);
//    
//    scanf("%f", &E);
//    
//    Prim();
//    
//    for (int i = 0; i < N; i++)
//      sol += cost[i];
//    
//    sol += (double)0.5;
//    
//    printf("#%d %llu\n", t, (ULL)sol);
//  }
//  
//  
//  return 0;
//}
