
public class Ex01 {
	public static void main(String[] args){
//		String a = "Carpediem";
//		String b = "s";
//		String c = "123";
//		System.out.println(a);
		
		String a = new String("Carpediem");
		String b = "Carpediem";
		System.out.println(a);
		System.out.println(a.equals(b));
		System.out.println(a.indexOf("d"));
		System.out.println(a.replaceAll("Car", "Seiz"));
		System.out.println(a.substring(0,3));
	}
}