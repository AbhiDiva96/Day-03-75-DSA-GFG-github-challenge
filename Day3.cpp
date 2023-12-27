#include<bits/stdc++.h>
 using namespace std;

            vector<int> antiDiagonalPattern(vector<vector<int>> matrix) {
                 int n=matrix.size();
          
        vector <int> ans;
        
        for(int j=0; j<2*n-1; j++){
            int i=(j<n? 0 : j-n+1);
            int col=j;
            if(j>n-1) col=n-1;
            while(i<n && col>=0){
                ans.push_back(matrix[i][col]);
                i++;
                col--;
            }
        }
        return ans;
            }

int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>> matrix[i][j];
            }
        }

        vector<int> ans = antiDiagonalPattern(matrix);
        for(int i=0; i<ans.size(); i++) cout<<ans[i] << " ";
        cout<<endl;
     }
return 0;}
