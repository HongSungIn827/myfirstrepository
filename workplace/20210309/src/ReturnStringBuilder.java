
public class ReturnStringBuilder {
	public static void main(String[] args){
		StringBuilder stb1 = new StringBuilder("123");
		StringBuilder stb2 = stb1.append("rooney");
		
		
		System.out.println(stb1.toString());
		System.out.println(stb2.toString());
		
//		stb2.append(9);
//		System.out.println(stb1.toString());
//		System.out.println(stb2.toString());
		
		StringBuilder sb = new StringBuilder();
		sb.append("test");
		sb.append("2");
		System.out.println(sb.toString());;
	}
}
