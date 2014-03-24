class Solution {
public:
    string intToRoman(int num) {
        string res;
        int NM, NC, NX, NI;
        int RM, RC, RX;
        int i, j;
        
        NM = num / 1000;
        RM = num % 1000;
        for(i=0; i<NM; i++)
            res = res + 'M';
        if(RM >= 900)
        {
            RM = RM - 900;
            res = res + "CM";
        }
        else if(RM >= 500)
        {
            RM = RM -500;
            res = res + 'D';
        }
        else if(RM >= 400)
        {
            RM = RM - 400;
            res = res + "CD";
        }        
        
        NC = RM / 100;
        RC = RM % 100;
        for(i=0; i<NC; i++)
            res = res + 'C';
        if(RC >= 90)
        {
            RC = RC - 90;
            res = res + "XC";
        }
        else if(RC >= 50)
        {
            RC = RC - 50;
            res = res + 'L';
        }
        else if(RC >= 40)
        {
            RC = RC - 40;
            res = res + "XL";
        }
        
        NX = RC / 10;
        RX = RC % 10;
        for(i=0; i<NX; i++)
            res = res + 'X';
        if(RX >= 9)
        {
            RX = RX - 9;
            res = res + "IX";
        }
        else if(RX >= 5)
        {
            RX = RX - 5;
            res = res +'V';
        }
        else if(RX >= 4)
        {
            RX = RX - 4;
            res = res +"IV";
        }
        
        for(i=0; i<RX; i++)
            res = res + 'I';
            
        return res;
        
    }
};