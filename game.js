let score = 0;

function updateDisplay() {
    document.getElementById("score").innerText = "Pontuação: " + score;
}

function addPoint() {
    score++;
    updateDisplay();
}

function resetPoints() {
    score = 0;
    updateDisplay();
}