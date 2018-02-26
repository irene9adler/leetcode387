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
    //�������ҵ�һ��ֻ����һ�ε���ĸ��λ��

    //�մ�
    if(s.empty() == true) return -1;
    vector <int> vec(26,0);//�˴�ע�� ��Ϊ˵����ֻ����Сд��ĸ ������������vector����Ϊ26 ����Ҫ���ַ�asc-'a' vector����Ϊint
    //�����-'a'��ע��a-z asc����97-122 A-Z��asc��ֵ��65-90 vector�±���asc��ֱֵ���õĻ�ҪŪ�� ����д256
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
