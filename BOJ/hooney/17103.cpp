#include<iostream>
#include<math.h>
#include <vector>
#include <stack>
#include <map>
#include<math.h>
#include<algorithm>
using namespace std;
int number = 1000000;
int a[1000001];
void primeNumberSieve() {

    // 1. �迭�� �����Ͽ� �ʱ�ȭ�Ѵ�.
    for (int i = 2; i <= number; i++) {
        a[i] = i;
    }

    // 2. 2���� �����ؼ� Ư�� ���� ����� �ش��ϴ� ���� ��� �����.
    // (���� �� �ڱ��ڽ��� ������ �ʰ�, �̹� ������ ���� �ǳʶڴ�.)
    for (int i = 2; i <= number; i++) {
        if (a[i] == 0) continue; // �̹� ������ ����� �ǳʶٱ�

        // �̹� ������ ���ڰ� �ƴ϶��, �� ������� ����Ͽ�, ������ ��� ���� �����
        for (int j = 2 * i; j <= number; j += i) {
            a[j] = 0;
        }
    }

    // 3. 2���� �����Ͽ� �����ִ� ���� ��� ����Ѵ�.


}
int main()
{
        primeNumberSieve();
        int N;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;
            int answer = 0;
            for (int j = 2; j <= num / 2; j++)
            {
                if (a[j] * a[num - j] != 0)answer++;
            }
            cout << answer << endl;
        }
        return 0;
}