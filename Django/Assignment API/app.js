const loadData = (id) => {
    fetch(`https://openapi.programming-hero.com/api/videos/category/${id}`)
        .then((res) => res.json())
        .then((data) => {
            originalData = data.data; 
            displayData(originalData);
        });
};
loadData(1000);
 const dynamic_box = document.getElementById("dynamic_box");
 const displayData = (data) => {
    dynamic_box.innerHTML = '';
    

    if(data.length == 0){
        const noDataMessage = document.createElement("div");
        noDataMessage.className = "col-md-12 text-center";
        noDataMessage.innerHTML = 
        `   
            <img class="iconimg" src="images/Icon.png" alt="">
            <p class ='notice mt-5 '> <b>Oops!! Sorry, There is no content here </b></p>
        `;
        dynamic_box.appendChild(noDataMessage);
    }else{
        data.forEach((item) => {
            const card = document.createElement("div");
            card.className ="col-md-3 col-sm-12 mt-4"
           // card.classList.add("col-md-3 col-sm-12")
            const authorName = item.authors[0].profile_name;
    
            card.innerHTML =
            `<img class="banner_img" src="${item.thumbnail}" alt="">
            <div class="post_time">
            ${item.others.posted_date ? item.others.posted_date : ''}
            </div>
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
    }
};

const sortDataByViews = (order) => {
    const sortedData = [...originalData];
    sortedData.sort((a, b) => {
        const viewsA = parseInt(a.others.views.replace('K', '000'));
        const viewsB = parseInt(b.others.views.replace('K', '000'));

        if (order === 'asc') {
            return viewsA - viewsB; 
        } else {
            return viewsB - viewsA; 
        }
    });
    displayData(sortedData);
};

const sortButton = document.querySelector('.sort .button');
let sortOrder = 'asc'; 
sortButton.addEventListener('click', () => {
    sortOrder = sortOrder === 'asc' ? 'desc' : 'asc'; 
    sortDataByViews(sortOrder);
});


