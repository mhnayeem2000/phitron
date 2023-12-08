from django.db import models
from category.models import category
# Create your models here.

class task(models.Model):
    title = models.CharField(max_length=50)
    description = models.TextField()
    date = models.DateField(auto_now_add=True)
    is_complete = models.BooleanField(default=False)
    category = models.ManyToManyField(category)

    def __str__(self) -> str:
        return self.title