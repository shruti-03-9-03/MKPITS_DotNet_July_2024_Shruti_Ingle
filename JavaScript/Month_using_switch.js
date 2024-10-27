function getMonthName() {
    var num = parseInt(document.getElementById("n1").value); // Corrected to parse the input value
    switch (num) { // Use the 'num' variable for switch
        case 1:
            document.getElementById("ss").innerHTML = "January";
            break;
        case 2:
            document.getElementById("ss").innerHTML = "February";
            break;
        case 3:
            document.getElementById("ss").innerHTML = "March";
            break;
        case 4:
            document.getElementById("ss").innerHTML = "April";
            break;
        case 5:
            document.getElementById("ss").innerHTML = "May";
            break;
        case 6:
            document.getElementById("ss").innerHTML = "June";
            break;
        case 7:
            document.getElementById("ss").innerHTML = "July";
            break;
        case 8:
            document.getElementById("ss").innerHTML = "August";
            break;
        case 9:
            document.getElementById("ss").innerHTML = "September";
            break;
        case 10:
            document.getElementById("ss").innerHTML = "October";
            break;
        case 11:
            document.getElementById("ss").innerHTML = "November";
            break;
        case 12:
            document.getElementById("ss").innerHTML = "December";
            break;
        default:
            document.getElementById("ss").innerHTML = "Invalid month number";
    }
}