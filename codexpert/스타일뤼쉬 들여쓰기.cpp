//#include <iostream>
//using namespace std;
//#define INDENTATION_EQ() (R*(small) + C*(middle) + S*(large))
//#define UNDEF -1
//char master[10][81];
//char user[10][81];
//
//int P, Q, X;
//int small, middle, large;
//int R, C, S;
//
//void init(){
//  
//  R = C = S = UNDEF;
//  small = middle = large = 0;
//  X = 0;
//  for (register int i = 0; i < P; i++)
//    scanf("%s", master[i]);
//  for (register int i = 0; i < Q; i++)
//    scanf("%s", user[i]);
//}
//
//void parseMasterCode(){
//  for (int rIdx = 0; rIdx < P; rIdx++){
//    int dotCnt = 0;
//    
//    for (register int cIdx = 0; master[rIdx][cIdx] != '\0'; cIdx++){
//      if (rIdx > 0 && cIdx == 0){
//        while (master[rIdx][cIdx] == '.') {
//          dotCnt++;  cIdx++;
//        }
//        if (small != 0 && R == UNDEF) {
//          R = dotCnt / small;
//          if(R >= 20){
//            R = 20;
//            dotCnt -= 20;
//          }
//        }
//        if (middle != 0 && C == UNDEF) {
//          C = dotCnt / middle;
//          if(C >= 20){
//            C = 20;
//            dotCnt -= 20;
//          }
//        }
//        if (large != 0 && S == UNDEF) {
//          S = dotCnt / large;
//          if(S >= 20){
//            S = 20;
//            dotCnt -= 20;
//          }
//        }
//      }
//      switch (master[rIdx][cIdx])
//      {
//        case '(':
//          small++;
//          break;
//        case ')':
//          small--;
//          break;
//        case '{':
//          middle++;
//          break;
//        case '}':
//          middle--;
//          break;
//        case '[':
//          large++;
//          break;
//        case ']':
//          large--;
//          break;
//        default:
//          break;
//      }
//    }
//    
//  }
//}
//
//void analyzeUserCode(){
//  for (int rIdx = 0; rIdx < P; rIdx++){
//    int dotCnt = 0;
//    
//    for (register int cIdx = 0; master[rIdx][cIdx] != '\0'; cIdx++){
//      switch (master[rIdx][cIdx])
//      {
//        case '(':
//          small++;
//          break;
//        case ')':
//          small--;
//          break;
//        case '{':
//          middle++;
//          break;
//        case '}':
//          middle--;
//          break;
//        case '[':
//          large++;
//          break;
//        case ']':
//          large--;
//          break;
//        default:
//          break;
//      }
//    }
//    
////    cout << " " << X;
//  }
////  cout << endl;
//  
//  cout << " " << R << " " << C << " " << S << endl;
//}
//
//int main(void){
//  int T;
//  freopen("/Users/youk/workspace/scsa/codexpert/codexpert/input.txt", "r", stdin);
//  cin >> T;
//  
//  for (int t = 1; t <= T; t++){
//    cin >> P >> Q;
//    init();
//    parseMasterCode();
//    
//    cout << "#" << t; analyzeUserCode(); cout << endl;
//  }
//  
//  
//  return 0;
//}
