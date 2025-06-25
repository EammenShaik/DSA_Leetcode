bool isAnagram(char * s, char * t)
{
    int count[26] = {0}; 
    int len1 = strlen(s);
    int len2 = strlen(t);
    
    if (len1 != len2) 
    {
        return false;
    }

    for (int i = 0; i < len1; i++) 
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < len2; i++) 
    {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) 
    {
        if (count[i] != 0) 
	{
            return false;
        }
    }

    return true;
}