import java.util.*;

public class Main {
    public static ArrayList<String> sub(String a)
    {
        if(a.length() == 0)
        {
            ArrayList<String> ros = new ArrayList<String>();
            ros.add("");
            return ros;
        }
        char s = a.charAt(0);
        String k = a.substring(1);

        ArrayList<String> res = sub(k);

        ArrayList<String> rr = new ArrayList<String>();
        
        for(String kk: res)
        {
            rr.add(kk);
            rr.add(s+kk);
        }

        return rr;
    }

    public static void main(String args[]) {

       ArrayList<String> s = sub("abc");
       
       for(String ss: s)
       System.out.println(ss);

    }
}

/*
output :


a
b
ab
c
ac
bc
abc
*/
