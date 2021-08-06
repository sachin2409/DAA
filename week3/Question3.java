import java.util.*;
public class Question3
{
    void merge(int arr[],int l,int m,int r)
    {
        int i,j,k;
        int n1=m-l+1;
        int n2=r-m;
        int left[]=new int[n1];
        int right[]=new int[n2];
        for(i=0;i<n1;i++)
            left[i]=arr[l+i];
        for(i=0;i<n2;i++)
            right[i]=arr[m+1+i];
        i=0;
        j=0;
        k=l;
        while(i<n1&&j<n2)
        {
            if(left[i]<=right[j])
            {
                arr[k]=left[i];
                i++;
            }
            else
            {
                arr[k]=right[j];
                j++;
            }
            k++;
            while(i<n1)
            {
                arr[k]=left[i];
                i++;
                k++;
            }
            while(j<n2)
            {
                arr[k]=right[j];
                j++;
                k++;
            }
        }
    }
    void sort(int arr[],int l,int r)
    {
        if(l<r)
        {
            int m=l+(r-l)/2;
            sort(arr,l,m);
            sort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
    public static void main(String[] args)
    {
        int t, n, i, j,num,flag;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (j = 1; j <= t; j++)
        {
            flag=0;
            n = sc.nextInt();
            int[] arr = new int[n];
            for (i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
            }
            Question3 ob=new Question3();
            ob.sort(arr,0,n-1);
            for(i=1;i<n;i++)
            {
                if(arr[i]==arr[i-1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
