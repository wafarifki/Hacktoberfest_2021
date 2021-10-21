import requests
user = "your username"
passwd = "your password"

auth_res = requests.post("https://api-ssl.bitly.com/access_token", auth=(user, passwd))
if auth_res.status_code == 200:
    access_token = auth_res.content.decode()
    print("Your access token:", access_token)
else:
    print("Failed get acccess token")
    exit()
headers= {"Authorization": f"Bearer {access_token}"}
group_res = requests.get("https://api-ssl.bitly.com/v4/groups", headers=headers)
if group_res.status_code == 200:
    group_data = group_res.json()['groups'][0]
    guid = group_data['guid']
else:
    print("Failed get GUID, exiting.....")
    exit()
url = input("URL you want to shorten: ")
shorten_res = requests.post("https://api-ssl.bitly.com/v4/shorten", json={"group_guid": guid, "long_url": url}, headers=headers)
if shorten_res.status_code == 200:
    link = shorten_res.json().get("link")
    print("Your URL:", link)
