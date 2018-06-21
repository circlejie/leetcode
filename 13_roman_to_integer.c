//13. Roman to Integer
//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//Input: "MCMXCIV"
//Output: 1994
//Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

int romanToInt(char* s) 
{
    int n,i,value=0;
    n=strlen(s);
    int *a;
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        switch (s[i])
        {
            case 'I': 
                a[i]=1;
                break;
            case 'V':
                a[i]=5;
                break;
            case 'X':
                a[i]=10;
                break;
            case 'L':
                a[i]=50;
                break;
            case 'C':
                a[i]=100;
                break;
            case 'D':
                a[i]=500;
                break;
            case 'M':
                a[i]=1000;
                break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]>a[i]&&i<n-1)
            value+=(-a[i]);
        else
            value+=a[i];
    }
    free(a);
    return value;
    
}