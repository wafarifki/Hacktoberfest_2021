import requests as r
from bs4 import BeautifulSoup
import time
import mysql.connector

start_time = time.time()

rawi = "majah" #change

mydb = mysql.connector.connect(
  host = "localhost",
  user = "root",
  password = "",
  database = "hadis"
)

mycursor = mydb.cursor()


headers = {
    'Host' : "www.hadits.id",
    'User-Agent' : "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:88.0) Gecko/20100101 Firefox/88.0"
}

for x in range(635,4333):
    base_url = "https://www.hadits.id/hadits/"+rawi+"/"+str(x)
    data    = r.get(base_url, headers=headers).text
    soup    = BeautifulSoup(data,"html.parser")
    title   = soup.title.text
    header  = soup.find('h2').text
    judul   = ""
    arab    = ""
    arti    = ""
    kitab   = header.split(" - ")[1].replace("Kitab ", "")
    classdata = soup.find_all("article", class_="hadits-content")

    for isi in classdata:
        judul = isi.find('h1').text
        hadist = isi.find_all('p')
        arab = hadist[0].text
        arti = hadist[1].text

    sql = "INSERT INTO `hadits` (`no`,`rawi`,`kitab`, `bab`, `arab`, `arti`, `latin`, `terkait`, `sanad`) VALUES (%s,%s,%s, %s, %s, %s, %s, %s, %s);"
    val = (x,rawi,kitab, judul, arab, arti, "", "", "")
    mycursor.execute(sql, val)
    mydb.commit()
    print(rawi,"ke - ", x)


# print(header)
# print(title)
# print("Nama Kitab:", kitab)
# print("BAB:",judul)
# print(arab)
# print(arti)
#mydb.commit()
print("--- %s seconds ---" % (time.time() - start_time))
