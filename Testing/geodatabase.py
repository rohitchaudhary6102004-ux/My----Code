import geoip2.database

# Download the database from CDN
db_url = 'https://cdn.jsdelivr.net/npm/geolite2-city/GeoLite2-City.mmdb.gz'

# Initialize the reader
reader = geoip2.database.Reader('./GeoLite2-City.mmdb')

# Look up an IP address
response = reader.city('192.168.29.245')

print(response.country.name)      # 'United States'
print(response.city.name)         # 'Minneapolis'
print(response.location.latitude) # 44.9759