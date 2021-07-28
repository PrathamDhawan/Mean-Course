const express = require('express');
const bodyParser = require('body-parser');

const app = express();

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: false }));

app.use((req, res, next) => {
  res.setHeader("Access-Control-Allow-Origin","*");
  res.setHeader(
    "Access-Control-Allow-Headers",
    "Origin, X-Requested-With, Content-Type, Accept");
  res.setHeader(
    "Access-Control-Allow-Methods",
    "GET, POST, PATCH, DELETE, OPTIONS");
  next();
});

app.post("/api/posts", (req, res, next) => {
  const post = req.body;
  console.log(post);
  res.status(201).json({
    message: 'Post Added Successfully.'
  });
});

app.use('/api/posts',(req, res, next) => {

  const posts = [
    {
      id: "1",
      title: "Pratham",
      content: "Dhawan"
    },
    {
      id: "2",
      title: "Pratham",
      content: "Dhawan"
    },{
      id: "3",
      title: "Pratham",
      content: "Dhawan"
    }
  ];

  res.status(200).json({
    message: 'Post fetched!',
    posts: posts
  });
});

module.exports = app;
