class Car1{
	//	가솔린 자동차 클래스 생성
	int gasolineGauge;	// 가솔린 잔여량
	//	가솔린 자동차 생성자 생성
	public Car1(int oil){
		gasolineGauge = oil;
	}
}

class HybridCar extends Car1{
	//	하이브리드 자동차
	int electricGauge;	// 전기 배터리 잔여량
	//	하이브리드 자동차 생성자 
	public HybridCar(int oil,int ele) {
		super(oil);
		electricGauge = ele;
	}
	
}

class HybridWaterCar extends HybridCar{
	//	하이브리드 수소 자동차
	int waterGauge;	// 에너지 전환용 물의 잔여량
	//	하이브리드 수소 자동차 생성자
	public HybridWaterCar(int oil, int ele, int wat) {
		super(oil,ele);
		waterGauge = wat;
	}
	
	//	현재 잔여량 보여주는 기능(메소드)
	public void showCurrentGauge(){
		System.out.println("잔여 가솔린: "+ gasolineGauge);
		System.out.println("잔여 전기량: "+ electricGauge);
		System.out.println("잔여 워터량: "+ waterGauge);
	}
}

public class ConstructorAndSuper {
	public static void main(String[] args){
		HybridWaterCar hwCar1 = new HybridWaterCar(4,2,3);
		hwCar1.showCurrentGauge();
		
		System.out.println();
		
		HybridWaterCar hwCar2 = new HybridWaterCar(9,5,7);
		hwCar2.showCurrentGauge();
		
		System.out.println();
		
		HybridWaterCar hwCar3 = new HybridWaterCar(10,10,9);
		hwCar3.showCurrentGauge();
	}
}
