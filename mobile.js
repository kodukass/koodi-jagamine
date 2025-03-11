const mingiMuudetavAsi = document.querySelector('#nav');
// . ja # toimivad antud kontekstis samamoodi kui laadilehel ja ilma nendeta
// kasutatakse otse HTML silti.
const mingiFunktsioon = () => {
mingiMuudetavAsi.classList.toggle('topnav');
};
mingiMuudetavAsi.addEventListener('click', mingiFunktsioon);
// ehk kuulatakse mingiMuudetavAsi-ja ja selle peale klikkides hakkab tööle
// mingiFunktsioon

/* Toggle between showing and hiding the navigation menu links when the user clicks on the hamburger menu / bar icon */
function myFunction() {
    var x = document.getElementById("myLinks");
    if (x.style.display === "block") {
      x.style.display = "none";
    } else {
      x.style.display = "block";
    }
  }

  function alert() {
    var x = document.getElementById("tekst");
    if (x.style.display == "block") { // `=` to `==` or `===`
      x.style.display = "none";
    } else {
      x.style.display = "block";
    }
  }