#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int nexts[100005];
char s[100005];
char k[100005];
void tonexts(int len,char * f,int * t)
{
    int i, j;

    for (i = 0, j = -1, t[0] = -1; i < len;)
    {
        if (j == -1 || f[i] == f[j]){
            i++;
            j++;
            t[i] = j;
        }
        else
            j = t[j];
    }
}

int main()
{
    int len1, len2, len;
    int lent1, lent2;
    int ans;
    while (scanf("%s%s", s, k) != EOF)
    {
        ans = 0;

        lent1 = strlen(s);
        tonexts(lent1, s, nexts);
        len1 = lent1 - nexts[lent1];

        lent2 = strlen(k);
        tonexts(lent2, k, nexts);
        len2 = lent2 - nexts[lent2];

        int tar = 0;
        if (len1 != len2 || lent1%len1 || lent2%len2)
        {
            tar = 1;
        }
        if (len1 == len2)
        {
            for (int i = 0; i < len1; i++)
            {
                if (s[i] != k[i])
                {
                    tar = 1;
                }
            }
        }
        if (!tar)
        {
            while (len1 <= min(lent1, lent2))
            {
                if (lent1%len1 == 0 && lent2%len1 == 0)
                {
                    ans++;
                }
                len1 += len2;
            }
            cout << ans << "\n";
        }
        else
        {
            int i, j, ie, je, tars;
            i = 0;
            j = 0;
            ie = 0;
            je = 0;
            tars = 0;
            while (!(ie&&je))
            {
                if (s[i] != k[j])
                {
                    tars = 1;
                    break;
                }
                i++;
                j++;
                if (i == lent1)
                {
                    ie = 1;
                    i = 0;
                }
                if (j == lent2)
                {
                    je = 1;
                    j = 0;
                }
            }
            if (i || j || tars)
            {
                cout << "0\n";
            }
                else if (max(lent1,lent2)%min(lent1,lent2)==0)
                cout << 1 << "\n";
                else
                {
                    cout << "0\n";
                }
        }
    }
    return 0;
}

