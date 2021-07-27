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
                if(arr[mid]==k)
                {
                    c++;
                    i=mid+1;
                    while(i!=n&&arr[i]==k)
                    {
                        c++;
                        i++;
                    }
                    i=mid-1;
                    while(arr[i]==k)
                    {
                        c++;
                        i--;
                    }
                    flag=1;
                    break;
                }
                else if(arr[mid]>k)
                    u=mid-1;
                else if(arr[mid]<k)
                    l=mid+1;
            }
            if(flag==1)
                System.out.println(k+"-"+c);
            else
                System.out.println("Not Present");
        }
    }
}