from django.db import models
# Create your models here.
class category(models.Model):
    title = models.CharField(max_length=20,default=None)
    
    def __str__(self):
        return self.title
        