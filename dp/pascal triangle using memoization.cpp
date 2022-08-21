class Solution {
public:
    int **arr = new int*[100];
    int getVal(int row, int col){
        if(row == col){
            arr[row][col] = 1;
            return 1;
        }else if(col == 0){
            arr[row][col] = 1;
            return 1;
        }else{
            if(arr[row][col] != 0){
                return arr[row][col];
            }else{
               arr[row][col] = getVal(row -1, col - 1) + getVal(row - 1, col);
            return arr[row][col]; 
            }
        }
    }
    vector<int> getRow(int rowIndex) {
        for (int i = 0; i < 100; i++) {
            arr[i] = new int[100];
        }
        for(int i = 0; i <100; i++){
            for(int j = 0; j < 100; j++){
                arr[i][j] = 0;
            }
        }
        vector<int> v;
        for(int i=0; i <= rowIndex; i++){
            v.push_back(getVal(rowIndex, i));
        }
        return v;
    }
};