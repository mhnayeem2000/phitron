const loadData =()=>{
    const searchText = document.getElementById('serachId').value;
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${searchText}`)
    .then(res => res.json())
    .then(data => dataDisply(data.meals));
}


const dataDisply = (data) => {
    document.getElementById("ttl_ml").innerText = data.length;
}