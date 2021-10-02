var elInputs = $(".calc");

var elHeightUnits = $("select[name=height-unit]");
var elFt = $("input[name=feet]");
var elIn = $("input[name=inches]");
var elCm = $("input[name=centimeters]");

var elWeightUnits = $("select[name=weight-unit]");
var elLbs = $("input[name=pounds]");
var elKg = $("input[name=kilograms]");

configureHeightField();
configureWeightField();

elHeightUnits.change(function() {
    configureHeightField();
});

elWeightUnits.change(function() {
    configureWeightField();
});

function configureHeightField() {
    var strUnit = elHeightUnits.val();

    if (strUnit == "ft") {
        elFt.parent().show();
        elIn.parent().show();
        elCm.parent().hide();
    } else {
        elFt.parent().hide();
        elIn.parent().hide();
        elCm.parent().show();
    }
}

function configureWeightField() {
    var strUnit = elWeightUnits.val();

    if (strUnit == "lbs") {
        elLbs.parent().show();
        elKg.parent().hide();
    } else {
        elLbs.parent().hide();
        elKg.parent().show();
    }
}

elInputs.keyup(function(e) {
    e.preventDefault();
    var intHeightInInches =
        elHeightUnits.val() == "ft" ?
        parseInt(elFt.val()) * 12 +
        parseInt(elIn.val() != "" ? elIn.val() : 0) :
        elCm.val() / 2.54;

    var intWeightInPounds =
        elWeightUnits.val() == "lbs" ? elLbs.val() : elKg.val() * 2.2;

    var intBMI =
        Math.round(
            ((intWeightInPounds * 703) /
                (intHeightInInches * intHeightInInches)) *
            100
        ) / 100;

    var strWeightClass =
        intBMI <= 18.5 ?
        "Underweight" :
        intBMI > 18.5 && intBMI <= 25 ?
        "Normal Weight" :
        intBMI > 25 && intBMI <= 30 ?
        "Overweight" :
        isNaN(intBMI) ?
        " " :
        "Obese";

    var intIdealWeightLow = Math.round(
        (18.5 * intHeightInInches * intHeightInInches) / 703
    );
    var intIdealWeightHigh = Math.round(
        (25 * intHeightInInches * intHeightInInches) / 703
    );
    if (strWeightClass && intBMI) {
        $(".results").empty();
        $(".bmi-calculator").append(
            '<div class="callout results">' +
            "<h3>Your Results</h3>" +
            "<h4>Your BMI is <em>" +
            intBMI +
            " (" +
            strWeightClass +
            ")</em><br />" +
            "Your optimal weight is between<br /><em>" +
            intIdealWeightLow +
            "</em> and <em>" +
            intIdealWeightHigh +
            "</em> " +
            elWeightUnits.val() +
            ".</h4>" +
            "</div>"
        );
        $("#userbmi").val(intBMI);
        $("#userbmi").attr("value", intBMI);
    } else {
        $(".results").empty();
    }
});