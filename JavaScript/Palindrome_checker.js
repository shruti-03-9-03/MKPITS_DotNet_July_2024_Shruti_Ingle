function checkPalindrome() {
    const num = parseInt(document.getElementById("number").value);
    if (isNaN(num)) {
        document.getElementById("result").innerText = "Please enter a valid number.";
        return;
    }

    let originalNum = num;
    let reversedNum = 0;

    while (originalNum > 0) {
        let lastDigit = originalNum % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        originalNum = Math.floor(originalNum / 10);
    }

    const isPalindrome = num === reversedNum;
    document.getElementById("result").innerText = isPalindrome ? "The number is a palindrome." : "The number is not a palindrome.";
}