import mysql.connector
from mysql.connector import Error
import os

def connect_db():
  try:
      mydb = mysql.connector.connect(
        host="192.168.56.101",  
        port=4567,
        user="yeonshinkim",
        passwd="1234",
        database="madang"
      )
      if mydb.is_connected():
        print("MySQL 데이터베이스에 성공적으로 연결되었습니다!")
      return mydb
  except Error as e:
    print(f"데이터베이스 연결에 실패했습니다: {e}")
    return None

def select(mydb):
    try:
        cur = mydb.cursor()
        table = input("검색하려는 테이블 이름을 입력하세요: ")
        
        sql = f'''SELECT * FROM {table}'''
        cur.execute(sql)
        select_result = cur.fetchall()
        
        print("\n조회된 데이터:")
        for x in select_result:
            print(x)
    except Error as e:
        print(f"데이터 조회 중 오류 발생: {e}")
        
def insert(mydb):
  try:
    cur = mydb.cursor()
    table = input("데이터를 삽입할 테이블 이름을 입력하세요: ")
    if table == "Book":
      bookid = input("추가할 도서의 도서 번호를 입력하세요: ")
      bookname = input("추가할 도서의 이름을 입력하세요: ")
      publisher = input("추가할 도서의 출판사를 입력하세요: ")
      price = input("추가할 도서의 가격을 입력하세요: ")
      sql = '''INSERT INTO Book(bookid, bookname, publisher, price) VALUES (%s, %s, %s, %s);'''
      cur.execute(sql, (bookid, bookname, publisher, price))
      mydb.commit()
      
      sql = f'''SELECT * FROM {table}'''
      cur.execute(sql)
      select_all_result = cur.fetchall()
      
      print("\n삽입 후 데이터:")
      for x in select_all_result:
        print(x)
    else:
      print('Book 테이블의 데이터 삽입이 가능합니다.\n')
  except Error as e:
    print(f"데이터 삽입 중 오류 발생: {e}")
          
def delete(mydb):
  try:
    cur = mydb.cursor()
    table = input("데이터를 삭제할 테이블 이름을 입력하세요: ")
    if table == "Book":
      bookid = input("테이블에서 삭제할 도서의 도서 번호를 입력하세요: ")
      sql = f'''DELETE FROM {table} WHERE bookid = %s;'''
      cur.execute(sql, (bookid,))
      mydb.commit()
      
      sql = f'''SELECT * FROM {table}'''
      cur.execute(sql)
      select_result = cur.fetchall()
      

      
      print("\n삭제 후 데이터:")
      for x in select_result:
        print(x)
    else:
      print('Book 테이블의 데이터 삭제이 가능합니다.\n')
  except Error as e:
    print(f"데이터 삽입 중 오류 발생: {e}")
    
def main():
  os.system('clear')
  mydb = None
  while True:
    print("----------------------------------------------\n")
    print("1. 데이터베이스 연결\t\t2. 데이터 삽입\n")
    print("3. 데이터 삭제\t\t\t4. 데이터 검색\n")
    print("\t\t\t\t0. 종료\n")
    print("----------------------------------------------\n")
    choice = input("선택하세요: ")
    if choice == "1":
      if mydb is None:
        os.system('clear')
        mydb = connect_db()
      else:
        os.system('clear')
        print("이미 데이터베이스에 연결되어 있습니다.")
    elif mydb and choice == "2":
        os.system('clear')
        insert(mydb)
    elif mydb and choice == "3":
        os.system('clear')
        delete(mydb)
    elif mydb and choice == "4":
        os.system('clear')
        select(mydb)
    elif choice == "0":
      os.system('clear')
      if mydb and mydb.is_connected():
        mydb.close()
        print("데이터베이스 연결이 종료되었습니다.")
      print("프로그램을 종료합니다.")

      break
    else:
      os.system('clear')
      print("잘못된 입력입니다. 다시 선택하세요.")
        
if __name__ == "__main__":
    main()