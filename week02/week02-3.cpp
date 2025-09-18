/// week02-3.cpp 使用C++ 2011 年新版的字串 stoi()功能
/// 在 CodeBlocks 裡, 必須開放 Settings-Computer... 把c++ 打勾勾
/// SOIT106_ADVANCE_001 Uing C++
#include <iostream>	/// cin cout 讀入資料、印出資料
#include <string>	/// string  字串的功能
using namespace std;    /// 使用「命名空間」
int main()
{
	string a;   /// 宣告字串 a
	cin >> a;   /// 讀入字串 a

	string ans; /// 宣告字串 ans 放答案用的
	int N = a.length(); /// 字串 a 的長度
	for(int i=N-1; i>=0; i--){  /// 到過來的迴圈
		ans += a[i];    /// 在迴圈裡, 把 a[i] 塞到 ans 的後面
	}

	cout << a << '+' << stoi(ans) << '='
		 << stoi(a)+stoi(ans) << endl;
        /// stoi() is "string to int" 把「字串」變成「整數」

}
