// Book allocation problem

#include <iostream>
using namespace std;
bool chkallocation(int a[], int n, int mid);
int findmid(int a[], int n)
{
    int s = 0;
    int e = 100;
    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (chkallocation(e, n ,s))
        {
            cout<<"inside if "<<endl;
            e = m - 1;
            m = s + (e - s) / 2;
            n = e + 1;
        }
        else
        {
            cout<<"inside else "<<endl;
            s = m + 1;
            m = s + (e - s) / 2;
            n = n - s;
        }
        chkallocation(e, n ,s);
    }
    return a[m];
}
int chkallocation(int e, int n,int s)
{
    int a[4] = {10, 20, 30, 40};
    int sum = 0;
    int studentcount = 0;
    int temp = 0;
    int mid = s + (e - s) / 2;
    bool allocation = 1;
    int i = 0;
    for (; i < n;)
    {
        cout<<"inside for "<<endl;
        sum += a[i];
        if (sum > a[mid])
        {
            temp = sum;
            studentcount++;
            sum = 0;
            i++;
        }
        else{
            i++;
        }
    }
    if (studentcount == 2)
    {
        return temp;
    }
    if (studentcount > 2)
    {
        allocation = 0;
        return allocation;
    }
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int ans = findmid(arr, 4);
    cout << "ans is : " << ans;
}