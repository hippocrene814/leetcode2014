class Solution {
public:
    void search(int x, int f1, int f2, int& n, int &num)
    {
        if(x==(1<<n)-1)
        {
            num++;
            return;
        }
        
        int a=(1<<n)-1 & ~(x|f1|f2);
        while(a)
        {
            int tmp=a&((~a)+1);
            a -= tmp;
            search(x+tmp, (f1+tmp)<<1, (f2+tmp)>>1, n, num);
        }
    }
    int totalNQueens(int n) {
        int num=0;
        search(0, 0, 0, n, num);
        return num;
    }
};