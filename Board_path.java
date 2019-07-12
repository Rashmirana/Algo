import java.io.*;
class Main {
    public static void path(int src, int dest, String p)
    {
        if(src == dest)
        {
        System.out.println(p);
        return;
        }
        
        
        for(int i = 1; i < 7; i++)
        {
            if(src + i <= dest)
            path(src + i, dest, p + i);
        }
    }
	public static void main (String[] args) {
		path(0, 5, "");
	}
}

/*
OUTPUT :
11111
1112
1121
113
1211
122
131
14
2111
212
221
23
311
32
41
5
*/
