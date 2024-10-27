function Calculate() {
    var number = document.getElementById("n1").value;
    number = Number(number);

    var isPerfectSquare = false;

    for (var i = 1; i <= number; i++) {
        if (i * i === number) {
            isPerfectSquare = true;
            break;
        }
    }

    if (isPerfectSquare) {
        document.getElementById("ss").innerHTML = "Perfect Square";
    } else {
        document.getElementById("ss").innerHTML = "Not a Perfect Square";
    }
}