/*Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.*/


class Solution {
public:
    int firstUniqChar(string s) {
    //题意是找第一个只出现一次的字母的位置

    //空串
    if(s.empty() == true) return -1;
    vector <int> vec(26,0);//此处注意 因为说可以只考虑小写字母 所以这儿定义的vector长度为26 下面要把字符asc-'a' vector类型为int
    //如果不-'a'，注意a-z asc码是97-122 A-Z的asc码值是65-90 vector下表是asc码值直接用的话要弄大 可以写256
    int i;
    for(i = 0;i < s.length();i++)
    {
        vec[s[i] - 'a'] ++;
    }

    //vector <int>::iterator ite;
    //for(ite = vec.begin();ite = vec.end();ite++)
    for(i = 0;i < s.length();i++)
    {
        if(vec[s[i] - 'a'] == 1)
           return i;
    }
        return -1;
    }
};
