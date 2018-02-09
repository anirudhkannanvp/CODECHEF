import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
 
class Solution {
 
    static void solveMeFirst(int t) {
         // Hint: Type return a+b; below 
  System.out.println(t/5);
  t%=5;
  System.out.println(t/3);
  t%=3;
  System.out.println(t/2);
  t%=2;
  System.out.println(t);
 
   }
 
   
 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        a = in.nextInt();
        int sum;
        solveMeFirst(a);
   }
}
