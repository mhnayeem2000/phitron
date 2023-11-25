const loadData = ()=>{
    fetch("https://openapi.programming-hero.com/api/videos/category/1000")
    .then((res) => res.json())
    .then((data) => displayData(data.data));
 };

 const dynamic_box = document.getElementById("dynamic_box");
 const displayData = (data) => {

    data.forEach((item) => {
        const card = document.createElement("div");
        card.className ="col-md-3 col-sm-12"
       // card.classList.add("col-md-3 col-sm-12")
        const authorName = item.authors[0].profile_name;

        card.innerHTML =
        `<img class="banner_img" src="${item.thumbnail}" alt="">
        <div class="post_time">${item.others.posted_date}</div>
        <div class="identity_section mt-2">
            <div class="author_img">
                <img src="${item.authors[0].profile_picture}" alt="">
            </div>
            <div class="autor_details">
                <div class="title"> <b>${item.title}</b> </div>
                <div class="name_badge">
                    <div class="auth_name">
                        <div class="channel_name">${authorName}</div>
                    </div>
                    <div class="auth_badge">
                        ${item.authors[0].verified ? '<img src="images/fi_10629607.svg" alt="">' : ''}
                    </div>
                </div>
                <div class="views">${item.others.views} Views</div>
            </div>
        </div>
        `;

        dynamic_box.appendChild(card);
    });
};
