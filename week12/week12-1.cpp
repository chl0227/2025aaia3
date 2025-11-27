/// week12-1.cpp
/// SOIT107_ADVANCE_013_C_C++
#include <iostream>
using namespace std;

int max(int a, int b, int c, int d){
	int max=d;
	if(max<a) max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	return max;
}

int min(int a, int b, int c, int d){
	int min=d;
	if(min>a) min=a;
	if(min>b) min=b;
	if(min>c) min=c;
	return min;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
