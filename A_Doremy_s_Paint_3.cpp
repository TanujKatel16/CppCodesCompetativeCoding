#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        bool check_pt = true;

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;        
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        int check = v[0];
        int count = 1;
        int count_typeA = 0;
        int variety = 1;

        for(int i = 1; i < n; i++){
            if(v[i] == check) count++;
            else {
                if(variety > 1){
                    cout << "No" << endl;
                    check_pt = false;
                    break;
                }
                count_typeA = count;
                count = 1;
                variety++;
                check = v[i];
            }
        }

        if(check_pt){
            if(variety == 1) cout << "Yes" << endl;
            else if(count == count_typeA || count - 1 == count_typeA || count + 1 == count_typeA) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
