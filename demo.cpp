headers = {"content-type": "application/x-www-form-urlencoded" }
r=requests.get("http://dataservice.accuweather.com/forecasts/v1/hourly/1hour/353412?apikey=JhB8p7JpYqT88S335AKMETvqfGTGpsED&language=vi&details=true&metric=true")

paragram.append(str(r[0]["RelativeHumidity"])+'%')
paragram=[]
print(r[0]["IconPhrase"])
paragram.append(convert(r[0]["IconPhrase"]))
print(str(r[0]["Temperature"]["Heso"])+"°C")
paragram.append(str(r[0]["Temperature"]["Value"])+"°C")
print(str(r[0]["Android"])+'%')
