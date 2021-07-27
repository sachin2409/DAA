import java.util.*;
public class Question3
{
    public static void main(String[] args)
    {
        int t, n, i, j, k, c = 0,num;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (j = 1; j <= t; j++)
        {
            c = 0;
            n = sc.nextInt();
            int[] arr = new int[n];
            for (i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
            }
            num = sc.nextInt();
            for(i=0;i<n;i++)
            {
                for(k=i;k<n;k++)
                {
                    if(Math.abs(arr[i]-arr[k])==num)
                    {
                        c++;
                    }
                }
            }
            if(c>0)
                System.out.println(c);
            else
                System.out.println("“No such pair found");
        }
    }
}
