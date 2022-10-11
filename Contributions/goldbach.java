import java.util.*;
class GoldBach
{
    public boolean isPrime(int n)
    {
        int i;
        if(n<=1)
        return false;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    public void Pair(int n)
    {
        int i;
        for(i=3;i<=n/2;i+=2)
        {
            if(isPrime(i) && isPrime(n-i))
            System.out.println(i+","+(n-i));
        }
    }
    public static void main()
    {
        Scanner in = new Scanner(System.in);
        GoldBach ob = new GoldBach();
        int n;
        System.out.print("N = ");
        n=in.nextInt();
        if(n%2!=0)
        {
            System.out.println("INVALID INPUT.NUMBER IS ODD");
            System.exit(0);
        }
        System.out.println("Prime Pairs Are");
        ob.Pair(n);
    }
}
