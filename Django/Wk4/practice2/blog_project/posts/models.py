from django.db import models
from categories.models import Category
from author.models import Author
# Create your models here.

class Post(models.Model):
    title = models.CharField(max_length=20)
    description = models.TextField(max_length=100)
    category = models.ManyToManyField(Category)
    author = models.ForeignKey(Author,on_delete=models.CASCADE)
    