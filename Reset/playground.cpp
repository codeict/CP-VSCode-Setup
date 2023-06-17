 #include <iostream>
 #include <string.h>
 using namespace std;
 long long titleToNumber(string str) {
    // Write your code here
    long long n = 0;
    for(int i = 0; i<str.size(); i++){
        long long num = str[i]-'A'+1;
        n = num+n*26;
    }
    return n;

}
int main(){
    string s;
    cin >> s;
    long long ans = titleToNumber(s);
    cout << ans << endl;
    return 0;
}