import java.util.*;
public class Question1
{
    public static void main(String[] args)
    {
        int t,n,i,j,k,c=0,s=0,key,y;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        for(j=1;j<=t;j++)
        {
            c=0;
            s=0;
            n=sc.nextInt();
            int arr[]=new int[n];
            for(i=0;i<n;i++)
            {
                arr[i]=sc.nextInt();
            }
            for(i=0;i<n;i++)
            {
                key=arr[i];
                y=i-1;
                s++;
                while(y>=0&&arr[y]>key)
                {
                    arr[y+1]=arr[y];
                    y=y-1;
                    c++;
                    s++;
                }
                arr[y+1]=key;
            }
            for(i=0;i<n;i++)
            {
                System.out.print(arr[i]+" ");
            }
            System.out.println("\ncomparisons = "+c);
            System.out.println("shifts = "+s);
        }
    }
}
