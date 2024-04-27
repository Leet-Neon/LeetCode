class Solution {
public:
    string convert(string s, int numRows) {
        string str[numRows][s.size()];
        int row=0;
        int col=0;
        int cur=0;
        while(cur<s.size())
        {
            while(row<numRows && cur < s.size())
            {
                str[row++][col]=s[cur++];
            }
            row = max(0,row-2);
            while(row>0 && cur<s.size())
            {
                str[row--][++col]=s[cur++];
        
            }
            col++;
        }
        string res="";
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                res+=str[i][j];
            }
        }
        return res;
    }
};