#include <iostream>
using namespace std;
void funDecToHex(int n) {
    int i = 0, m, num[32];
    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(n > 0) {
        num[i++] = n%16;
        n = n/16;
    }
    for(i = i-1; i >= 0; i --) {
        m = num[i];
        cout << hex[m];
    }
    cout << endl;
}
void funHexToDex(string s16) {
    int sum = 0,t;
    for(int i = 0; i < s16.length(); i ++) {
        if(s16[i] <= '9')
            t = s16[i] - '0';
        else if('A' <= s16[i] && s16[i] <= 'F')
            t = s16[i]-'A'+10;
        else if('a' <= s16[i] && s16[i] <= 'f')
            t = s16[i] - 'a' + 10;
        sum = sum*16+t;
    }
    cout << sum << endl;
}

int main(void) {
    int sel = 1;
    int n;
    string s16;
    cout << "10진수 --> 16진수 변환 모드: 1" << endl;
    cout << "16진수 --> 10진수 변환 모드: 2" << endl;
    cout << "1과 2 이외 다른 값을 입력하면 프로그램이 종료됩니다." << endl;
    cout << "변환하고자는 모드 번호를 선택하세요: ";
    cin >> sel;
    if (sel == 1) {
        cout << "16진수로 변환하고자하는 10진수를 입력하세요: ";
        cin >> n;
        funDecToHex(n);
    } else if (sel == 2) {
        cout << "10진수로 변환하고자하는 16진수를 4자리수로 입력하세요 (예, 0AF5): ";
        cin >> s16;
        funHexToDex(s16);
    } else
        cout << "프로그램을 종료합니다." << endl;
    return 0;
}
