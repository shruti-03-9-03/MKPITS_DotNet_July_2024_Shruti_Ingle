function checkEligibility() {
    var examScore = Number(document.getElementById("examScore").value);
    var academicPerformance = Number(document.getElementById("academicPerformance").value);

   var minExamScore = 70;
    var minGPA = 3.0;

    var eligibilityMessage = "";
    if (examScore >= minExamScore && academicPerformance >= minGPA) {
        eligibilityMessage = "Congratulations! You are eligible for admission.";
    } else if (examScore >= minExamScore && academicPerformance < minGPA) {
        eligibilityMessage = "You meet the entrance exam requirement, but your academic performance is below the required GPA.";
    } else if (examScore < minExamScore && academicPerformance >= minGPA) {
        eligibilityMessage = "You meet the GPA requirement, but your entrance exam score is below the required level.";
    } else {
        eligibilityMessage = "Unfortunately, you do not meet the eligibility criteria for admission.";
    }

    document.getElementById("result").innerHTML = eligibilityMessage;
}