import mysql.connector
db_name = "python_test_db"
mydbconnection =  mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "aminayeem..1",
    database = db_name

)

mycursor = mydbconnection.cursor()
sqlquery =  """
        create table student(
            Id int primary key,
            Roll int,
            Name varchar(255)
        );
    """
mycursor.execute(sqlquery)
print("Create table successful")

