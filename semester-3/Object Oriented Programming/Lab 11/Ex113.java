import java.sql.*;
public class Ex113 {
    public static void main(String[] args) {
        try{
            final String DB_URL = "jdbc:mysql://localhost:3306/";
            final String USER = "root";
            final String Password = "1965";
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection(DB_URL,USER,Password);
            Statement smt = con.createStatement();
            String sql = "Create Database Meeting";
            smt.executeUpdate(sql);
            sql = "use Meeting";
            smt.executeUpdate(sql);
            String sqlTable = "Create table Meeting_db"+
                              "(NameofParticipant varchar(250),"+
                              "MeetingID int default 1056,"+
                              "ScheduledTime time,"+
                              "Email varchar(250),"+
                              "Mobile bigint)";
            smt.executeUpdate(sqlTable);
            String sqlInsert = "insert into Meeting_db values('Aman Chauhan',1144,'7:30:00','amanch2209@gmail.com',7895590330)";
            smt.executeUpdate(sqlInsert);

            //A
            ResultSet rs = smt.executeQuery("Select NameofParticipant from Meeting_db");
            while(rs.next()){
                System.out.println(rs.getString(1));
            }

            //B
            rs = smt.executeQuery("Select NameofParticipant from Meeting_db where MeetingID=1144");
            while(rs.next()){
                System.out.println("Name of the participant in meeting 1144 " +rs.getString(1));
            }

            //C
            sqlInsert = "insert into Meeting_db values('Yash Raj',NULL,'13:20:00','yashraj@gmail.com',7685955890)";
            smt.executeUpdate(sqlInsert);
            rs = smt.executeQuery("Select NameofParticipant,MeetingID from Meeting_db where MeetingID=1056");
            while(rs.next()){
                System.out.println(rs.getString(1)+" "+rs.getInt(2));
            }

            //D
            rs = smt.executeQuery("select count(*),NameofParticipant,MeetingId from Meeting_db where MeetingID=1105");
            while(rs.next()){
                System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getInt(3));
            }

            //E
            

            con.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
