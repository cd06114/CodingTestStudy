#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = s.size();

    for (int size = s.size(); size >= 1; --size) {
        int tmp = 0; //���� ���ڿ� ����
        for (int i = 0; i < s.size(); ) {
            //���̰� �Ѿ�� Ž�� ����
            if (i + size - 1 >= s.size()) {
                tmp += s.size() - i;
                break;
            }

            int cnt = 0; //size ���� Ƚ��
            string cur = s.substr(i, size); //����
            for (int j = i + size; j + size - 1 < s.size(); j += size) {
                if (cur == s.substr(j, size)) ++cnt;
                else break;
            }

            tmp += size;
            if (cnt) tmp += to_string(cnt + 1).size();
            i += size * (cnt + 1);
        }
        answer = min(answer, tmp);
    }
    return answer;
}