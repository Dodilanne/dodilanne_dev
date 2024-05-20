const img = document.querySelector("img");
if (img) {
  img.addEventListener("animationend", event => {
    if (event.animationName === "sit" && typeof confetti === "function") {
      setTimeout(() => {
        confetti({
          particleCount: 1500,
          spread: 120,
          decay: 0.93,
          zIndex: 0,
        });
      }, 150);
    }
  });
}
