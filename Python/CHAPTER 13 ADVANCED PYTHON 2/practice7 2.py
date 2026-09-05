from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<p>Hello, World! Hello Rohit Chaudhary</p>"

app.run()