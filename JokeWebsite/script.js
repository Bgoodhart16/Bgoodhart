document.addEventListener("click", function (event) {
    if(!event.target.matches("#loadJoke")) return;

    fetch("https://v2.jokeapi.dev/joke/Any?safe-mode")
    .then((response) => response.json())
    .then((data) => displayJoke(data));
});

function displayJoke(data) {
    const setup = document.getElementById("setup");
    const delivery = document.getElementById("delivery");
    setup.innerHTML = data.setup;
    delivery.innerHTML = data.delivery;
}