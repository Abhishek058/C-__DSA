#include<iostream>
using namespace std;

char get_max_char(string s){
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){
        int n = 0; 
        n = s[i] - 'a';
        arr[n]++;
    }
    int max = -1, ans = 0;
    for(int i = 0; i < 26; i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<get_max_char(s);
    return 0;
}