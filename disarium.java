//135
//=1^1+3^2+5^3
//=1+9+125
//=135
import java.util.*;
class disarium
{
    public static void main(String args[])
    {
        int a,c,d,e=0,f;
        String b;
        Scanner s=new Scanner(System.in);
        System.out.println("ENTER A NUMBER :");
        System.out.println("");
        a=s.nextInt();
        System.out.println("");
        f=a;
        b=Integer.toString(a);
        c=b.length();
        while(f>0)
        {
            d=f%10;
            e=e+(int)Math.pow(d,c);
            c--;
            f=f/10;
        }
        if(a==e)
        {
            System.out.println("THE NUMBER IS A DISARIUM NUMBER");
        }
        else
        {
            System.out.println("THE NUMBER IS NOT A DISARIUM NUMBER");
        }
    }
}