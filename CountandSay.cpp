#include <cstdlib>
#include <cstdio>
using namespace std;
struct pairr
{
  char num;
  int count;
};
class Solution {
public:
    string countAndSay(int n) {
    string a = "1";
    for(int k=0; k<(n-1); k++)
    {
		vector<pairr> vp;
		vector<char> vi;
        string b = a;
        for(int j=0; j<b.length(); j++)
        {
            vi.push_back(b[j]);
        }
        int len = vi.size();
        int count = 1;
        for(int i=1; i<len; i++)
        {
            if(vi[i] == vi[i-1])
            {
                count++;
            }
            else
            {
                pairr tmp;
                tmp.num = vi[i-1];
                tmp.count = count;
                vp.push_back(tmp);
                count = 1;
            }
        }
		pairr tmp2;
		tmp2.count = count;
		tmp2.num = vi[len-1];
		vp.push_back(tmp2);
        a = "";
        for(int i=0; i<vp.size(); i++)
        {
            char tt[40];
//            itoa(vp[i].count, tt, 10);
			sprintf(tt, "%d", vp[i].count);
            string t = tt;
            a = a + t;
            a = a + vp[i].num;
        }
    }
    return a;
    }
};