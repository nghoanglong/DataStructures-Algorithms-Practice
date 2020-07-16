#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>

using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)
#define mp map<ll, ll>

using namespace std;

mp my_map;

struct BST{
    ll data;
    BST *left;
    BST *right;
    BST(ll data){
        this->data = data;
        this->left = this->right = NULL;
    }
};

void insertnode(BST *&tree, ll data){
    if(tree){
        if(tree->data >= data){
            insertnode(tree->left, data);
        }
        else{
            insertnode(tree->right, data);
        }
    }
    else{
        tree = new BST(data);
        return;
    }
}
void RNL(BST *tree, ll k){
    if(tree){
        RNL(tree->right, k);
        //cout << k << " " << tree->data << endl;
        if(my_map.find(k) == my_map.end()){
            my_map.insert(pair<ll, ll>(k, tree->data));
        }
        RNL(tree->left, k + 1);
    }
}

int main(){
    ll n; cin >> n;
    BST *tree = NULL;
    for(ll i = 0;i < n;++i){
        ll data; cin >> data;
        insertnode(tree, data);
    }
    RNL(tree, 0);
    for(auto x = my_map.rbegin();x != my_map.rend();x++){
        cout << x->second << " ";
    }
}