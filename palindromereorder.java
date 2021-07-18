import java.util.*;
class palindromereorder
{
  public static void main(String args[])
  {
    Scanner in=new Scanner(System.in);
		String s=in.next();
		HashMap<Character,Integer> hm=new HashMap<>();
		for(int i=0;i<s.length();i++)
		{
		    hm.put(s.charAt(i),hm.getOrDefault(s.charAt(i),0)+1);
		}
		int ind=0;
		StringBuilder sb=new StringBuilder();
		for(char ch:hm.keySet())
		{
		    int val=hm.get(ch);
		    if(val%2==0)
		    {
		        String str=(""+ch).repeat(val/2);
		        sb.append(str);
		    }
		}
		String odd="";
		int co=0;
		for(char ch:hm.keySet())
		{
		  if(hm.get(ch)%2==1){
		  co++;
		  odd=(""+ch).repeat(hm.get(ch));
		  if(co>1)
		  {
		    System.out.println("NO SOLUTION");return;
		  }
		  }
		}
		System.out.println(sb.toString()+odd+(sb.reverse().toString()));
	
  }
}