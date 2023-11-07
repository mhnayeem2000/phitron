import mysql.connector

# Create a dictionary with the connection parameters
db_config = {
    "host": "localhost",
    "user": "root",
    "passwd": "aminayeem..1"
}

# Create a MySQL connection using the configuration
mydb = mysql.connector.connect(**db_config)

print(mydb)
