let img1 = "https://images.unsplash.com/photo-1541961817716-44060761e345?crop=entropy&cs=tinysrgb&fit=max&fm=jpg&ixid=MnwxfDB8MXxyYW5kb218MHx8fHx8fHx8MTY4MTg1MDA1Mg&ixlib=rb-4.0.3&q=80&utm_campaign=api-credit&utm_medium=referral&utm_source=unsplash_source&w=1080";
let img2 = "https://images.unsplash.com/photo-1497106636505-e4fd6e16d74c?crop=entropy&cs=tinysrgb&fit=max&fm=jpg&ixid=MnwxfDB8MXxyYW5kb218MHx8fHx8fHx8MTY4MTg1MDA1Mg&ixlib=rb-4.0.3&q=80&utm_campaign=api-credit&utm_medium=referral&utm_source=unsplash_source&w=1080";
let img3 = "https://images.unsplash.com/photo-1563722680966-fd2b17fc0ddf?crop=entropy&cs=tinysrgb&fit=max&fm=jpg&ixid=MnwxfDB8MXxyYW5kb218MHx8fHx8fHx8MTY4MTg1MDA1Mg&ixlib=rb-4.0.3&q=80&utm_campaign=api-credit&utm_medium=referral&utm_source=unsplash_source&w=1080";

let lar = document.querySelector(".left");
let rar = document.querySelector(".right");

let carousal_img = document.querySelector("#cur-img");
let carousal_img_bg = document.querySelector("#cr-bg-img");

let prev_img = document.querySelector("#prev-img");
let next_img = document.querySelector("#next-img");

let head = document.querySelector("h2");
let para = document.querySelector("p");
lar.addEventListener("click",()=>{
    let cur_img =carousal_img.src;
    switch(cur_img){
        case img1:
            carousal_img.src = img2;
            carousal_img_bg.src=img2;
            prev_img.src=img3;
            next_img.src=img1;
            head.innerHTML="<i>GREEN</i>";
            para.innerHTML="<i>-green</i>";
            break
        case img2:
            carousal_img.src = img3;
            carousal_img_bg.src=img3;
            prev_img.src=img1;
            next_img.src=img2;
            head.innerHTML="<i>&quot ... &quot</i>";
            para.innerHTML="i'm too tired to think of anything";
            break
        case img3:
            carousal_img.src = img1;
            carousal_img_bg.src=img1;
            prev_img.src=img2;
            next_img.src=img3;
            head.innerHTML="WHITE MOUNTAINS";
            para.innerHTML="-I dont know i just picked it from the internet";
            break
    }    
})


function right_move(){
    let cur_img = carousal_img.src;
    switch(cur_img){
        case img1:
            carousal_img.src = img3;
            carousal_img_bg.src=img3;
            prev_img.src=img1;
            next_img.src=img2;
            head.innerHTML="<i>&quot ... &quot</i>";
            para.innerHTML="-i'm too tired to think of anything";
            break
        case img3:
            carousal_img.src = img2;
            carousal_img_bg.src=img2;
            prev_img.src=img3;
            next_img.src=img1;
            head.innerHTML="<i>GREEN</i>";
            para.innerHTML="<i>-green</i>";
            break
        case img2:
            carousal_img.src = img1;
            carousal_img_bg.src=img1;
            prev_img.src=img2;
            next_img.src=img3;
            head.innerHTML="WHITE MOUNTAINS";
            para.innerHTML="-I dont know i just picked it from the internet";
            break
    }    
}

rar.addEventListener("click",right_move);

setInterval(right_move,10000);

