import express from "express";
import bodyParser from "body-parser";
import ejs from "ejs";
import mongoose from "mongoose";
import bcrypt from "bcrypt";

const app = express();
const port = 3000;
const saltRound = 10;

mongoose.connect("mongodb://127.0.0.1:27017/Spotify",{useNewUrlParser:true});

const spSchema = new mongoose.Schema({
    name:String,
    password:String
})

const spUser = new mongoose.model("User",spSchema);

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));
app.set("view engine","ejs");


app.get("/",(req,res)=>{
    res.render("home"); 
});

app.get("/sign_up",(req,res)=>{
    res.render("sign_up");
});

app.get("/login",(req,res)=>{
    res.render("login");
});



app.post("/sign_up",(req,res)=>{
    const username = req.body.email;
    const password = req.body.password;
    if(password.length <8){
        res.render("sign_up",{error1:"",error2:"Password Should be atleast 8 characters long"});
    }else{
    bcrypt.hash(req.body.password,saltRound,function(err,hash){
        const newUser = new spUser({
            name:username,
            password:hash
        });
        try{
            newUser.save();
            res.render("index");
        }catch(err){
            console.log(error);
        }
    })}
});


app.post("/login",(req,res)=>{
    const username = req.body.email;
    const password = req.body.password;
    async function run(){
        try{
            let data = await spUser.findOne({name:username})
            console.log(data);
            if(data===null){
                res.render("login",{error1:"Email or Username is invalid",error2:"Password is invalid"});
            }else{
                bcrypt.compare(password,data.password,function(err,result){
                    if(result===true){
                        res.render("index");
                    }else{
                        res.render("login",{error1:"Email or Username is invalid",error2:"Password is invalid"});
                    }
                })

            }
        }catch(err){
            console.log(err)
        }
    }
    run();
});

app.listen(port,()=>{
    console.log(`Server has succesfully started on port:${port}`);
});