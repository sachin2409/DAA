import java.util.*;
public class Question3
{
    public static void main(String[] args)
    {
        int t, n, i, j, k, c = 0;
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
            k = sc.nextInt();
            int step = (int)Math.floor(Math.sqrt(n));
            int prev = 0;
            while (arr[Math.min(step, n)-1] < k)
            {
                c++;
                prev = step;
                step += (int)Math.floor(Math.sqrt(n));
                if (prev >= n)
                    System.out.println("Not Present "+c);
            }
            while (arr[prev] < k)
            {
                c++;
                prev++;
                if (prev == Math.min(step, n))
                    System.out.println("Not Present "+c);
            }
            if (arr[prev] == k)
            {
                c++;
                System.out.println("Present "+c);
            }
        }
    }
}
