const app = document.getElementById("app");

function showLoading() {
    const template = document.createElement("template");
    template.innerHTML = `    <section class="circle">
      <section class="square squareOne"></section>
      <section class="square squareTwo"></section>
      <section class="square squareThree"></section>
      <section class="square squareFour"></section>
      <section class="square squareFive"></section>
      <section class="square squareSix"></section>
      <section class="square squareSeven"></section>
      <section class="square squareEight"></section>
    </section>
    <section class="loadingBar">
      <section class="load"></section>
    </section>`;
    app.innerHTML = template.innerHTML;
}

function showContributor() {
    showLoading();
    const template = document.createElement("template");
    fetch("https://api.github.com/repos/fdciabdul/hacktoberfest-indonesia/contributors")
        .then((response) => response.json())
        .then((data) => {
            data.forEach((contributor) => {
                template.innerHTML += `<div class="contributor">
        <a href="${contributor.html_url}" target="_blank">
          <img src="${contributor.avatar_url}" width="100px" height="100px" />
        </a>
        <br>
         @${contributor.login}
         
        </div>`;
            });

            app.innerHTML = template.innerHTML;
        });
}

const setBg = () => {
  const randomColor = Math.floor(Math.random()*16777215).toString(16);
  if(randomColor == 'ffffff')
  {
    randomColor = "f0f0f0"
  }
  document.body.style.backgroundColor = "#" + randomColor;
  alert(randomColor);
}
setBg();
showContributor();
