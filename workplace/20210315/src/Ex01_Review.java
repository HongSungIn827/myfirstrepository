
public class Ex01_Review {
	public static void main(String[] args){
		int[] ar1 = new int[5];
		
		double[] ar2 = new double[7];
		
		float[] ar3 = new float[9];
		
//		float[] ar3;
//		ar3 = new float[9];
		
		System.out.println("배열 ar1 길이: "+ar1.length);
		System.out.println("배열 ar2 길이: "+ar2.length);
		System.out.println("배열 ar3 길이: "+ar3.length);
		
		System.out.println("length_1: "+ar1.length);
		ar2 = new double[100];
		System.out.println("length_2: "+ar2.length);
		ar3 = new float[200];
		System.out.println("length_3: "+ar3.length);
	}
}
