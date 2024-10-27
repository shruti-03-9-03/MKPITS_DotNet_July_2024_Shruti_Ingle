function countDigits() {
    let number = document.getElementById("numberInput").value;
    let digitCount = number.length;

    // Handle cases where the input is not a valid number
    if (isNaN(number) || number === "") {
        document.getElementById("result").innerText = "Please enter a valid number.";
    } else {
        document.getElementById("result").innerText = "Number of digits: " + digitCount;
    }
}