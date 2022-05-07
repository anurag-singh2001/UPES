//1-Load the Library
import java.sql.*;
class DBCon{
    public static void main(String[] args) {
        try {
            // Database credentials
            final String DB_URL="jdbc:mysql://localhost:3306/hello";
            final String USER="root";
            final String PASS="root";

            //2-Load driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            //3- Make the Connection
            Connection con=DriverManager.getConnection(DB_URL, USER, PASS);

            //4- Prepare Statements
            Statement smt=con.createStatement();

            //5-Execute the Statement
            ResultSet rs=smt.executeQuery("select * from emp");

            //Optional : 6- Print the Response
            while(rs.next()){
                System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
            }

            // 6-Close the connection
            con.close();

        } catch (Exception e) {
            
            System.out.println(e);
        }
    }
}