/// week07-2.cpp ���e�P�P�@��
/// TAICA ��j��¦�{���]�p(C++) �����Ҧ��D ��6�D
#include <iostream>
#include <cmath>    /// �N�OC�� math.h �̭��� sin() cos() abs() sqrt()
using namespace std;
int main()
{
    int n; /// Part 1: Input
    cin >> n;

    for(int i=1; i<n*2; i++){   /// Part 2: Output
        for(int j=1; j<n*2; j++){
                ///�L�X�Ӥ���,�o�{�F���ߪ�1�ܦ��N��/���I�F��!!!
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1;  ///cout << n;
        }
        cout << endl;/// cout << "�{�bi�O: " << i << endl; /// �Ӽh������
    }
    /// Part 2: Output
}   /// 2�|��3�h��, 3�|��5�h��, 4�|��7�h��, 5�|��9�h��
