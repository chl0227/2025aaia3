/// week02-3.cpp �ϥ�C++ 2011 �~�s�����r�� stoi()�\��
/// �b CodeBlocks ��, �����}�� Settings-Computer... ��c++ ���Ĥ�
/// SOIT106_ADVANCE_001 Uing C++
#include <iostream>	/// cin cout Ū�J��ơB�L�X���
#include <string>	/// string  �r�ꪺ�\��
using namespace std;    /// �ϥΡu�R�W�Ŷ��v
int main()
{
	string a;   /// �ŧi�r�� a
	cin >> a;   /// Ū�J�r�� a

	string ans; /// �ŧi�r�� ans �񵪮ץΪ�
	int N = a.length(); /// �r�� a ������
	for(int i=N-1; i>=0; i--){  /// ��L�Ӫ��j��
		ans += a[i];    /// �b�j���, �� a[i] ��� ans ���᭱
	}

	cout << a << '+' << stoi(ans) << '='
		 << stoi(a)+stoi(ans) << endl;
        /// stoi() is "string to int" ��u�r��v�ܦ��u��ơv

}
