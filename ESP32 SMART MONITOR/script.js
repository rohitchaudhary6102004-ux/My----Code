// Temperature & Humidity Values

let temperature = 32;
let humidity = 60;


// HTML Elements

const temp = document.getElementById("temp");
const hum = document.getElementById("hum");
const time = document.getElementById("time");


// Last Updated Time

function updateTime()
{
    const now = new Date();

    time.innerHTML = now.toLocaleTimeString();
}


// Sensor Values

function updateSensor()
{

    temperature = (30 + Math.random() * 5).toFixed(1);

    humidity = (55 + Math.random() * 10).toFixed(1);

    temp.innerHTML = temperature + "°C";

    hum.innerHTML = humidity + "%";

    updateTime();

}


// Start Dashboard

updateSensor();

setInterval(updateSensor,1000);