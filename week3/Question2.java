import java.util.*;
public class Question2
{
    public static void main(String[] args)
    {
        int t, n, i, j,m, k, c = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (j = 1; j <= t; j++)
        {
            c=0;
            n = sc.nextInt();
            int arr[] = new int[n];
            for (i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
            }
            for(i=0;i<n;i++)
            {
                for(k=i+1;k<n;k++)
                {
                    if(arr[k]<arr[i])
                    {
                        int temp=arr[k];
                        arr[k]=arr[i];
                        arr[i]=temp;
                    }
                    c++;
                }
            }
            for(i=0;i<n;i++)
            {
                System.out.print(arr[i]+" ");
            }
            System.out.println("\ncomparisons = "+c);
            System.out.println("swaps = "+(n-1));
        }
    }
}