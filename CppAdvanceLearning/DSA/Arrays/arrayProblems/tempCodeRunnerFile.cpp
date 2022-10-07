
    for(int i=0;i<n;i++)
    cout<<rmax[i]<<setw(3);
    cout<<endl;
    
    int left=0,right=0;
    int res=-1;
    while(left<n && right<n)
    {
        if(lmin[left]<= rmax[right])
        {
            cout<<lmin[left]<<setw(3)<<rmax[right]<<setw(3)<<res<<setw(3)<<left<<setw(3)<<right<<endl;
            res = max(res, right - left);
            right++;
        }else{
            left++;
        }
    }
    return res;    
}
int main()
{