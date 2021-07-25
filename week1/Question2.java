import java.util.*;
public class Question2
{
    public static void main(String[] args)
    {
        int t, n, i, j, k, c = 0, flag = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (j = 1; j <= t; j++)
        {
            c = 0;
            flag = 0;
            n = sc.nextInt();
            int arr[] = new int[n];
            for (i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
            }
            k = sc.nextInt();
            int l=0,u=n-1;
            while(u>=l)
            {
                int mid=l+(u-l)/2;
                c++;
                if(arr[mid]==k)
                {
                    flag=1;
                    break;
                }
                else if(arr[mid]>k)
                    u=mid-1;
                else if(arr[mid]<k)
                    l=mid+1;
            }
            if(flag==1)
                System.out.println("Present "+c);
            else
                System.out.println("Not Present "+c);
        }
    }
}