function categorizeAngle() {
    var angle = parseFloat(document.getElementById("angle").value);
    let category;

    if (angle > 0 && angle < 90) {
        category = "Acute angle";
    } else if (angle === 90) {
        category = "Right angle";
    } else if (angle > 90 && angle < 180) {
        category = "Obtuse angle";
    } else if (angle === 180) {
        category = "Straight angle";
    } else {
        category = "Invalid angle";
    }

    // Display the result
    document.getElementById("result").innerHTML = "This is a " + category;
}