
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path("", views.home),
    path('author/',include('author.urls')),
    path('profile/',include('profiles.urls')),
    path('categories/',include('categories.urls')),
    path('posts/',include('posts.urls')),
]
