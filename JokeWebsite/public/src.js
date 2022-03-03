document.addEventListener("click", function (event) {
  if (!event.target.matches("#loadJoke")) return;

  fetch("https://v2.jokeapi.dev/joke/Any?safe-mode")
    .then((response) => response.json())
    .then((data) => displayJoke(data))
    .catch(() => displayError());
});

function displayJoke(data) {
  const setup = document.getElementById("setup");
  const delivery = document.getElementById("delivery");
  setup.innerHTML = data.setup;
  delivery.innerHTML = data.delivery;
}

function displayError() {
  const error = document.getElementById("error");
  error.innerHTML = "Whoops, something went wrong. Please try again later!";
}

window.onbeforeunload = function () {
  window.scrollTo(0, 0);
};
