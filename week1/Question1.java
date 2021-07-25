import java.util.*;
public class Question1
{
    public static void main(String[] args)
    {
        int t,n,i,j,k,c=0,flag=0;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        for(j=1;j<=t;j++)
        {
            c=0;
            flag=0;
            n=sc.nextInt();
            int arr[]=new int[n];
            for(i=0;i<n;i++)
            {
                arr[i]=sc.nextInt();
            }
            k=sc.nextInt();
            for(i=0;i<n;i++)
            {
                c++;
                if(k==arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                System.out.println("Present "+c);
            else
                System.out.println("Not Present "+c);
        }
    }
}
