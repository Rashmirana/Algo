/*
Two strings,  and , are called anagrams if they contain all the same characters in the same frequencies. For example, the anagrams of CAT are CAT, ACT, TAC, TCA, ATC, and CTA.
*/

import java.util.Scanner;

public class Anagram {

static String bubbleSort(String str) {  
        int n = str.length();  
        char temp;  
        char[] ch = str.toCharArray();
         
         for(int i=0; i < n; i++){  
                 for(int j=1; j < (n-i); j++){  
                          if((ch[j-1]+"").compareToIgnoreCase(ch[j]+"") > 0){  
                                 //swap elements  
                                 temp = ch[j-1];  
                                 ch[j-1] = ch[j];  
                                 ch[j] = temp;  
                         }  
                          
                 }  
         }  
  
         return new String(ch);
    }  
    static boolean isAnagram(String a, String b) {
        // Complete the function
        a=  bubbleSort(a);
        b= bubbleSort(b);
        char[] tempA = a.toCharArray();
        char[] tempB = b.toCharArray();
        int n= tempA.length;
        int m= tempB.length;
        if(n !=m)
        return false;

        for(int i=0; i<n; i++){
        if((tempA[i] + "").compareToIgnoreCase(tempB[i] + "") != 0)
            return false;

    
        }
           return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
/*
Input:-
CAT
ACT

Output:-
Anagrams
*/