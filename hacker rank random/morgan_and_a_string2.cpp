#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct suffix
{
    int index;
    char *suff;
};

int cmp(struct suffix a, struct suffix b)
{
    return strcmp(a.suff, b.suff) < 0? 1 : 0;
}

int *buildSuffixArray(char *txt, int n)
{
    struct suffix suffixes[n];

    for (int i = 0; i < n; i++)
    {
        suffixes[i].index = i;
        suffixes[i].suff = (txt+i);
    }

    sort(suffixes, suffixes+n, cmp);

    int *suffixArr = new int[n];
    for (int i = 0; i < n; i++){
        suffixArr[i] = suffixes[i].index;
        cout<<suffixes[i].suff<<endl;
    }

    return  suffixArr;
}

void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    char txt[] = "1011";
    int n = strlen(txt);
    int *suffixArr = buildSuffixArray(txt,  n);
    cout << "Following is suffix array for " << txt << endl;
    printArr(suffixArr, n);

    char txt1[] = "DAD";
    int n1 = strlen(txt1);
    int *suffixArr1 = buildSuffixArray(txt1,  n1);
    cout << "Following is suffix array for " << txt1 << endl;
    printArr(suffixArr1, n1);

    return 0;
}