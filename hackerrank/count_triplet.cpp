//Count Triplet
//You are given an array and you need to find number of tripets of indices  such that the elements at those indices are in geometric progression for a given common ratio r
//link: https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,r,i;
    cin>>n>>r;
    long long int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];

    //taking two maps
    unordered_map<int,int>right,left;
    long long ans=0;

    //counting the frequency of the array elements
    for(i=0;i<n;i++)
    right[arr[i]]++;

    //taking pair of a/r, a ,ar
    for(i=0;i<n;i++)
    {
        long long c1=0,c2=0;
        //checking for "a/r" in left map
        if(arr[i]%r==0)
            c1=left[arr[i]/r];
        //decrease the count in right map
        right[arr[i]]--;

        //number of right elements for "a*r"
        c2=right[arr[i]*r];

        //calculate the ans
        ans+=c1*c2;

        //increase the count of left map
        left[arr[i]]++;
        
    }
    cout<<ans;

    return 0;
}

