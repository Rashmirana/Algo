class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode DemoNode= new ListNode(0);
         ListNode curr= DemoNode;
        int carry=0;
        while(l1 != null || l2 != null)
        {
            int x= (l1 != null)?l1.val :0;
            int y= (l2 != null)?l2.val :0;
            int sum = carry+x+y;
            carry= sum/10;
            curr.next= new ListNode(sum % 10);
            curr= curr.next;
            
            if(l1 != null) l1= l1.next;
            if(l2 !=null) l2= l2.next;
        }
        if(carry >0)
        {
            curr.next = new ListNode(carry);
        }
        
        return DemoNode.next;
    }
}

public class AddList {
    public static int[] stringToIntegerArray(String input) {
        input = input.trim();
        input = input.substring(1, input.length() - 1);
        if (input.length() == 0) {
          return new int[0];
        }
    
        String[] parts = input.split(",");
        int[] output = new int[parts.length];
        for(int index = 0; index < parts.length; index++) {
            String part = parts[index].trim();
            output[index] = Integer.parseInt(part);
        }
        return output;
    }
    
    public static ListNode stringToListNode(String input) {
        // Generate array from the input
        int[] nodeValues = stringToIntegerArray(input);
    
        // Now convert that list into linked list
        ListNode dummyRoot = new ListNode(0);
        ListNode ptr = dummyRoot;
        for(int item : nodeValues) {
            ptr.next = new ListNode(item);
            ptr = ptr.next;
        }
        return dummyRoot.next;
    }
    
    public static String listNodeToString(ListNode node) {
        if (node == null) {
            return "[]";
        }
    
        String result = "";
        while (node != null) {
            result += Integer.toString(node.val) + ", ";
            node = node.next;
        }
        return "[" + result.substring(0, result.length() - 2) + "]";
    }
    
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {
            ListNode l1 = stringToListNode(line);
            line = in.readLine();
            ListNode l2 = stringToListNode(line);
            
            ListNode ret = new Solution().addTwoNumbers(l1, l2);
            
            String out = listNodeToString(ret);
            
            System.out.print(out);
        }
    }
}

/*
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/