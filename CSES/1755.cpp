#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string text; cin >> text;
    map<char, int> my_map;
    for(int i = 0;i < text.length();i++){
        if(my_map.find(text[i]) != my_map.end()){
            my_map[text[i]] += 1;
        }
        else{
            my_map.insert(pair<char, int>(text[i], 1));
        }
    }
    int odd = 0;
    for(auto x = my_map.begin();x != my_map.end();x++){
        if(x->second % 2 != 0){
            ++odd;
        }
    }
    if(odd >= 2){
        //nếu số kí tự đơn lẻ khác nhau >= 2 thì ko thể lập thành chuỗi palindrome đc ví dụ A E 
        cout << "NO SOLUTION";
        return 0;
    }

    //Phần output format theo yêu cầu là ra chuỗi palindrome
    for(auto x = my_map.begin();x != my_map.end();x++){
        if(x->second % 2 == 0){
            for(int i = 0;i < x->second/2;i++){
                cout << x->first;
            }
        }
    }
    for(auto x = my_map.begin();x != my_map.end();x++){
        if(x->second % 2 != 0){
            for(int i = 0;i < x->second;i++){
                cout << x->first;
            }
        }
    }
    for(auto x = my_map.rbegin();x != my_map.rend();x++){
        if(x->second % 2 == 0){
            for(int i = 0;i < x->second/2;i++){
                cout << x->first;
            }
        }
    }
}