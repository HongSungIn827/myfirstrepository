import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class ManagerAtable {
	
	Scanner scan = new Scanner(System.in);
	Connection conn = null;
	PreparedStatement pstmt = null;
	
	public void insertAtable(){
		String idx = null;
		String name = null;
		String gender = null;
		String remark = null;
//		scan.nextLine();
		System.out.println("번호입력");
		idx = scan.nextLine();
		System.out.println("이름입력");
		name = scan.nextLine();
		System.out.println("성별입력");
		gender = scan.nextLine();
		System.out.println("비고입력");
		remark = scan.nextLine();
		// try 구문안에 있는 내용 실행하다가 에러가 발생하면 catch로 빠진다.
				/*
				 * 1.jar 파일 추가 확인
				 * 2.DB 연결
				 * 3.SQL 구문작성
				 */
				Connection conn = null;
				PreparedStatement pstmt = null;
				try{
					Class.forName("oracle.jdbc.driver.OracleDriver");
					conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
					System.out.println("DB연결성공");
					pstmt = conn.prepareStatement("INSERT INTO ATABLE "+
												"(IDX, NAME, GENDER, REMARK) "+
												"VALUES "+
												"(?, ?, ?, ?)");
					pstmt.setString(1, idx);
					pstmt.setString(2, name);
					pstmt.setString(3, gender);
					pstmt.setString(4, remark);
					
					pstmt.executeUpdate();

					
				}catch(Exception e){
					System.out.println("에러 그 클래스 파일 없음");
				}
				finally{
					try {
						conn.close();
					} catch (SQLException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				}
	}

	public void updateAtable(){
		String idx = null;
		String name = null;
		String gender = null;
		String remark = null;
//		scan.nextLine();
		System.out.println("번호입력");
		idx = scan.nextLine();
		System.out.println("이름입력");
		name = scan.nextLine();
		System.out.println("성별입력");
		gender = scan.nextLine();
		System.out.println("비고입력");
		remark = scan.nextLine();
		// try 구문안에 있는 내용 실행하다가 에러가 발생하면 catch로 빠진다.
				/*
				 * 1.jar 파일 추가 확인
				 * 2.DB 연결
				 * 3.SQL 구문작성
				 */
				Connection conn = null;
				PreparedStatement pstmt = null;
				try{
					Class.forName("oracle.jdbc.driver.OracleDriver");
					conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
					System.out.println("DB연결성공");
					pstmt = conn.prepareStatement("UPDATE ATABLE "+
												  "SET NAME=?,GENDER=?,REMARK=?"+
												  "WHERE IDX = ?");
					pstmt.setString(1, name);
					pstmt.setString(2, gender);
					pstmt.setString(3, remark);
					pstmt.setString(4, idx);
					
					pstmt.executeUpdate();

					
				}catch(Exception e){
					System.out.println("에러 그 클래스 파일 없음");
				}
				finally{
					try {
						conn.close();
					} catch (SQLException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				}
	}
	
	public void deleteAtable(){
		String idx = null;
		String name = null;
		String gender = null;
		String remark = null;
//		scan.nextLine();
		System.out.println("번호입력");
		idx = scan.nextLine();
		System.out.println("이름입력");
		name = scan.nextLine();
		System.out.println("성별입력");
		gender = scan.nextLine();
		System.out.println("비고입력");
		remark = scan.nextLine();
		// try 구문안에 있는 내용 실행하다가 에러가 발생하면 catch로 빠진다.
				/*
				 * 1.jar 파일 추가 확인
				 * 2.DB 연결
				 * 3.SQL 구문작성
				 */
				Connection conn = null;
				PreparedStatement pstmt = null;
				try{
					Class.forName("oracle.jdbc.driver.OracleDriver");
					conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
					System.out.println("DB연결성공");
					pstmt = conn.prepareStatement("DELETE FROM ATABLE");
					pstmt.setString(1, idx);
					pstmt.setString(2, name);
					pstmt.setString(3, gender);
					pstmt.setString(4, remark);
					
					pstmt.executeUpdate();

					
				}catch(Exception e){
					System.out.println("에러 그 클래스 파일 없음");
				}
				finally{
					try {
						conn.close();
					} catch (SQLException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				}
	}
	
	public void selectAtable(){
		Connection conn = null;			//DB 연결 객체
		PreparedStatement pstmt = null;	//SQL 구문작성객체
		ResultSet rs = null;			//table 내용을 담는 객체
		
		try{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			
			conn =
					DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
			
			pstmt = conn.prepareStatement("select * from atable");
//			insert update delete -> pstmt.executeUpdate()
//			select -> pstmt.executeQuery()
			rs = pstmt.executeQuery();
			while(rs.next()){
				System.out.print(rs.getString(1)+" ");
				System.out.print(rs.getString(2)+" ");
				System.out.print(rs.getString(3)+" ");
				System.out.println(rs.getString(4));
			}
			
		}catch(Exception e){
			e.printStackTrace();
		}
		finally{
			try{
				if(rs != null) rs.close();
				if(pstmt != null) pstmt.close();
				if(conn != null) conn.close();
			}catch(Exception e){}
			
		}
	}
}

