function checkDiscount() {
    var totalAmount = document.getElementById("totalAmount").value;
    totalAmount = Number(totalAmount);

    var discountMessage = "";

    if (totalAmount >= 1000) {
        discountMessage = "Congratulations! You are eligible for a 20% discount.";
    } else if (totalAmount >= 500) {
        discountMessage = "You are eligible for a 10% discount.";
    } else {
        discountMessage = "Sorry, you are not eligible for a discount.";
    }

    document.getElementById("result").innerHTML = discountMessage;
}