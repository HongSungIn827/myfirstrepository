
public class Insert {
	public static void main(String[] args){
		StringBuffer sb = new StringBuffer();
		sb.append("Make count");
		sb.insert(4," it");
		System.out.println("sb = "+sb);
		System.out.println("sb_toString = "+sb.toString());
		
	}
}
