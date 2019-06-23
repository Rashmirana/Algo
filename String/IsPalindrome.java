import java.io.*;
import java.util.*;
import java.lang.*;

public class IsPalindrome {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        StringBuilder str = new StringBuilder();
        str.append(A);
        str.reverse();
        String str1= str.toString();
        if(A.compareTo(str1) == 0)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}
/*
Input:-
madam

Output:-
Yes
*/



