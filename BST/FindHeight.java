import java.util.*;
import java.io.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class FindHeight{

	public static int getHeight(Node root){
      //Write your code here
      if(root == null){
          return -1;
      }
        
        int leftdepth= getHeight(root.left);
        int rightdepth= getHeight(root.right);

         return (leftdepth > rightdepth ? leftdepth : rightdepth)+1 ;
    }

    public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
	 public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        Node root=null;
        while(T-->0){
            int data=sc.nextInt();
            root=insert(root,data);
        }
        int height=getHeight(root);
        System.out.println("Height: "+ height);
    }
}
/*
Input:-
7
3
5
2
1
4
6
7
Output:-
Height: 3
*/
