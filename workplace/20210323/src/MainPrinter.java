interface Printable{
	public void print(String doc);
	default public void printCMYK(String doc){
		System.out.println("new default Printer...");
		System.out.println(doc);
	}
}

interface ColorPrintable extends Printable{
	void printCMYK(String doc);
}

class VUpSPrinter implements ColorPrintable{

	@Override
	public void print(String doc) {
		System.out.println("old SamsungPrinter...");
		System.out.println(doc);
		
	}

	@Override
	public void printCMYK(String doc) {
		System.out.println("new SamsungPrinter...");
		System.out.println(doc);
		
	}
	
}

class SPrinter implements Printable{

	@Override
	public void print(String doc) {
		System.out.println("samsung Printer ....");
		System.out.println(doc);	
	}
	
}

class LPrinter implements Printable{

	@Override
	public void print(String doc) {
		System.out.println("LG Printer ....");
		System.out.println(doc);
	}
	
}

public class MainPrinter {
	public static void main(String[] args){
		SPrinter sp = new SPrinter();
		sp.print("this is report....");
		System.out.println();
		LPrinter lp = new LPrinter();
		lp.print("this is report....");
		
		System.out.println();
		VUpSPrinter bsp = new VUpSPrinter();
		bsp.print("this is report...");
		bsp.printCMYK("this is report...");
	}
}
