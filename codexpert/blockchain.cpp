//// main
//
//#ifndef _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//
//#include <stdio.h>
//
//#define MAXSERVER 5
//#define IMAGESIZE 400000
//
//extern void syncBlockChain(int S, unsigned char blockchainimage[MAXSERVER][IMAGESIZE]);
//extern int  calcAmount(int hash, int exchangeid);
//
//static unsigned char blockchainimage[MAXSERVER][IMAGESIZE];
//
//static int S, Q;
//
//int calcHash(unsigned char buf[], int pos, int len) {
//  int hash = 0;
//  
//  while (len-- > 0) {
//    hash = buf[pos++] + (hash << 6) + (hash << 16) - hash; // hash = buf[pos++] + 65599 * hash;
//    hash &= 0x7fffffff;
//  }
//  return hash;
//}
//
//static inline int get16(char c) {
//  return c >= 'a' ? 10 + c - 'a' : c - '0';
//}
//
//
//static bool run() {
//  int corrected = 0;
//  
//  scanf("%d %d", &S, &Q);
//  for (int server = 0; server < S; ++server) {
//    int len;
//    scanf("%d", &len);
//    for (int p = 0; p < len;) {
//      char buf[80];
//      scanf("%s", buf);
//      for (int i = 0; i < 64 && p < len; i += 2, ++p)
//        blockchainimage[server][p] = (get16(buf[i]) << 4) | get16(buf[i + 1]);
//    }
//  }
//  
//  syncBlockChain(S, blockchainimage);
//  
//  for (int q_count = 0; q_count < Q; ++q_count) {
//    int hash, exchangeid, answer;
//    scanf("%d %d %d", &hash, &exchangeid, &answer);
//    int result = calcAmount(hash, exchangeid);
//    //printf("%d ", result);
//    if (result == answer)
//      ++corrected;
//  }
//  
//  return corrected == Q;
//}
//
//int main() {
//  int TC, totalscore;
//  
//  freopen("input.txt", "r", stdin);
//  
//  //setbuf(stdout, NULL);
//  scanf("%d", &TC);
//  
//  totalscore = 0;
//  for (int testcase = 1; testcase <= TC; ++testcase) {
//    int score = 0;
//    if (run())
//      score = 100;
//    totalscore += score;
//    printf("#%d %d\n", testcase, score);
//  }
//  printf("total score = %d\n", totalscore / TC);
//  return 0;
//}
//
//
//////// user
//// 4 Byte - 서버에 저장된 데이터 총길이 Byte값 (Big Endian)
//// ~ 다음 ( 7 + 3의배수 ) Bytes의 블록이 일렬로 저장되어 있음
//// 4 Byte - 프리해쉬 (Big Endian)
//// 2 Byte - 랜덤
//// 1 Byte - 거래횟수 (~16);
//// 1 Byde - 각 거래별 거래소ID (1~15)
//// 2 Byte - 각 거래별 거래액 (Big Endian)
//
//#include <stdio.h>
//
//#define MAXSERVER 5
//#define IMAGESIZE 400000
//extern int calcHash(unsigned char buf[], int pos, int len);
//
//// 구조체 선언 (변수, 함수)
//struct st {
//  int hash;    // 자기해쉬값
//  int prehash;   // 부모해쉬값
//  unsigned char * pos; // 블록 주소 시작점
//  st ** next;    // 자식 노드 주소값 배열 st * 의 배열
//  int nextNum;   // 자식 노드의 갯수
//  int amount[16];   // 거래소ID 별 거래액
//  
//  st * set(unsigned char * p); // hash, prehash, pos 값 초기설정 함수
//  void clear(void);    // hash, prehash, pos 값 클리닝 함수
//  void init_link(st **);   // 트리구성 함수
//  void amount_sum();    // 트리를 탐색하며 거래액을 거래소ID별로 합산하는 재귀함수
//};
//
//// 전역 선언 (변수, 함수)
//st * data[15000 * 5 + 7] ={ 0, }; // 중복된 블록 데이터 주소배열 => 나중에는 유효한 블록 데이터 주소배열
//st gen[15000 * 5 + 7] ={ 0, };  // 할당을 위해 미리 생성된 구조체 (매번 new 하는 것이 )
//st * Root;   // 부모해쉬 0을 갖는 블록을 저장하기 위함
//int genCnt;   // 할당된 st 구조체의 갯수
//int dataCnt;  // 중복된 블록의 data 배열의 갯수 (인덱스 0번 부터)
//int vaildCnt; // 유효한 블록의 data 배열의 갯수 (인덱스 0번 부터)
//int serverNum;  // 서버의 개수 전역변수로 저장
//
//int bsearch(int sup, int(*get)(st *)); // 이진탐색
//void quickSort(int first, int last, st ** input, int(*get)(st *)); // 퀵정렬 - 중간점
//void parsing(unsigned char blockchainimage[MAXSERVER][IMAGESIZE]); // 블록이미지를 파싱해서 블록데이터 data로 쌓는 함수
//void screen(void);       // 쌓아진 블록데이터 data에서 유효한 블록만 남기는 함수
//inline int get_pre_hash(st * p) { return p->prehash; }// 부모해쉬값을 리턴으로
//inline int get_hash(st * p) { return p->hash; } // 자신의 해쉬값을 리턴으로
//
//
//// 구현부
//void syncBlockChain(int S, unsigned char blockchainimage[MAXSERVER][IMAGESIZE])
//{
//  serverNum = S;
//  parsing(blockchainimage);
//  quickSort(0, dataCnt - 1, data, get_hash); // 해쉬값에 따라 블록을 오름차순 정렬
//  screen();         // 정렬된 해쉬값을 순차적으로 읽으며 유효한 값만 data에 다시 저장
//  quickSort(0, vaildCnt - 1, data, get_pre_hash);  // 유효한 블록을 부모해쉬값에 따라 오름차순 정렬
//  {
//    Root = data[0];   // data[0]은 부모해쉬 0을 갖는 블록이므로 루트에 저장
//    Root->init_link(data); // 루트부터 트리를 연결
//    Root->amount_sum();  // Leaf까지 내려가서 Root로 돌아오며 거래액을 합산하는 재귀함수
//  }
//  quickSort(0, vaildCnt - 1, data, get_hash); // 해쉬값에따라 유효한 블록을 오름차순 정렬
//}
//
//int calcAmount(int hash, int exchangeid)
//{
//  int targetIdx = bsearch(hash + 1, get_hash); // 원하는 해쉬값이 저장된 블록데이터의 주소의 data 인덱스 검색
//  return data[targetIdx]->amount[exchangeid];  // 해당 인덱스에서 해당 거래소ID의 거래액을 리턴
//}
//
//
//// 구조체 멤버함수 구현부
//st * st::set(unsigned char * p) {
//  hash = calcHash(p, 0, (7 + (p[6]) * 3));
//  prehash =  p[0] * (1 << 24) + p[1] * (1 << 16) + p[2] * (1 << 8) + p[3];
//  pos = p;
//  return this;
//}
//
//void st::clear(void) {
//  hash = prehash = nextNum = 0;
//  pos = 0x0;
//  if (next) {
//    delete[] next;
//    next = (st **)0x0;
//  }
//  for (int i = 0; i < 16; i++) amount[i] = 0;
//}
//
//void st::init_link(st ** data) {
//  // assigned amount.
//  register int i;
//  for (i = 0; i < 16; i++) amount[i] = 0;
//  for (i = 0; i < pos[6]; i++) {
//    amount[pos[7 + i * 3]] += (pos + 7 + i * 3)[1] * (1 << 8) + (pos + 7 + i * 3)[2];
//  }
//  // connect link.
//  int srtIdx = bsearch(hash, get_pre_hash) + 1;
//  int dstIdx = bsearch(hash + 1, get_pre_hash);
//  nextNum = dstIdx - srtIdx + 1;
//  if (nextNum < 1) {
//    next = 0;
//    return;
//  }
//  delete[] next;
//  next = new st *[nextNum];
//  for (i = 0; i < nextNum; i++) {
//    next[i] = data[srtIdx + i];
//    next[i]->init_link(data);
//  }
//}
//
//void st::amount_sum() {
//  register int i, k;
//  
//  if (next == 0) return;
//  
//  for (k=0; k < nextNum; k++) {
//    next[k]->amount_sum();
//    for (i=0; i < 16; i++) amount[i] += next[k]->amount[i];
//  }
//}
//
//// 전역 함수 구현부
//void screen(void) {
//  vaildCnt = 0;
//  register int i;
//  unsigned int before_hash = 0;
//  unsigned int now_hash = 0;
//  int hash_cnt = 0;
//  
//  gen[dataCnt].clear();
//  data[dataCnt] = &gen[dataCnt];
//  for (i=0; i <= dataCnt; i++) {
//    now_hash = data[i]->hash;
//    if (now_hash == before_hash) hash_cnt++;
//    else {
//      if (hash_cnt > (serverNum / 2)) {
//        data[vaildCnt] = data[i - 1];
//        vaildCnt++;
//      }
//      before_hash = now_hash;
//      hash_cnt = 1;
//    }
//  }
//}
//
//void parsing(unsigned char blockchainimage[MAXSERVER][IMAGESIZE]) {
//  dataCnt = 0; genCnt = 0;
//  register int i, k;
//  int length;
//  for (k=0; k < serverNum; k++) {
//    unsigned char * p = blockchainimage[k];
//    length = p[0] * (1 << 24) + p[1] * (1 << 16) + p[2] * (1 << 8) + p[3];
//    
//    for (i=4; i < length; i += (7 + (p[i + 6]) * 3)) {
//      gen[genCnt].clear();
//      data[dataCnt++] = gen[genCnt++].set(p + i);
//    }
//  }
//}
//
//void quickSort(int first, int last, st ** input, int(*get)(st *))
//{
//  int pivot;
//  int i;
//  int j;
//  st * temp;
//  
//  if (first < last)
//  {
//    pivot = first;
//    i = first;
//    j = last;
//    
//    temp = input[(first + last) / 2];
//    input[(first + last) / 2] = input[pivot];
//    input[pivot] = temp;
//    
//    while (i < j)
//    {
//      while (get(input[i]) - get(input[pivot]) <= 0 && i < last)
//      {
//        i++;
//      }
//      while (get(input[j]) - get(input[pivot]) > 0)
//      {
//        j--;
//      }
//      if (i < j)
//      {
//        temp = input[i];
//        input[i] = input[j];
//        input[j] = temp;
//      }
//    }
//    
//    temp = input[pivot];
//    input[pivot] = input[j];
//    input[j] = temp;
//    
//    quickSort(first, j - 1, input, get);
//    quickSort(j + 1, last, input, get);
//  }
//}
//
//int bsearch(int sup, int(*get)(st *)) {
//  int s = 0;
//  int e = vaildCnt - 1;
//  int m;
//  int sol = -1;
//  for (;;) {
//    if (s > e) break;
//    m = (s + e) / 2;
//    if (get(data[m]) < sup) {
//      sol = m;
//      s = m + 1;
//    }
//    else {
//      e = m - 1;
//    }
//  }
//  return sol;
//}
