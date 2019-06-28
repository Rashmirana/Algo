import java.util.*;

class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class LCA{
	Node findLCA(Node root, int n, int m)
	{
		if(root == null)
			return null;
		 
		if(root.data > n && root.data > m)
			return findLCA(root.left, n, m);
		
		if(root.data < n && root.data < m)
			return findLCA(root.right, n, m);
		
		return root;
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
    		LCA tree= new LCA();
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            int n1= 10, n2= 14;
			Node z= tree.findLCA(root, n1, n2);
			System.out.println("LCA of "+n1 + " & "+ n2 +" is ="+ z.data);
        }	
}
/*
Input:-
7
20
8
22
4
12
10
14 
Output:-
LCA of 10 & 14 is =12
 */
