function convertTemperature() {
    var temperature = parseFloat(document.getElementById("temperature").value);
    var conversionType = parseInt(document.getElementById("conversionType").value);
    let convertedTemp;

    switch (conversionType) {
        case 1:
            convertedTemp = (temperature * 9/5) + 32;
            document.getElementById("result").innerHTML = temperature + "°C is " + convertedTemp.toFixed(2) + "°F";
            break;
        case 2:
            convertedTemp = (temperature - 32) * 5/9;
            document.getElementById("result").innerHTML = temperature + "°F is " + convertedTemp.toFixed(2) + "°C";
            break;
        default:
            document.getElementById("result").innerHTML = "Invalid selection.";
    }
}