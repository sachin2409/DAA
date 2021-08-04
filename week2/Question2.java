import java.util.*;
public class Question2
{
    static int bsearch(int arr[], int n, int k)
    {
        int l=0,u=n-1;
        while(u>=l)
        {
            int mid=l+(u-l)/2;
            if(arr[mid]==k)
                return mid;
            else if(arr[mid]>k)
                u=mid-1;
            else if(arr[mid]<k)
                l=mid+1;
        }
        return -1;
    }
    public static void main(String[] args)
    {
        int t, n, i, j,m, k, c = 0, flag = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (j = 1; j <= t; j++)
        {
            flag = 0;
            n = sc.nextInt();
            int arr[] = new int[n];
            for (i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
            }
            for(i=0;i<n;i++) {
                for (m = i + 1; m < n - 1; m++) {
                    k = arr[i] + arr[m];
                    int b=bsearch(arr,n,k);
                    if(b!=-1)
                    {
                        flag=1;
                        System.out.println(i+","+j+","+b);
                        break;
                    }
                }
            }
            if(flag==0)
                System.out.println("No sequence found");
        }
    }
}