from django.shortcuts import render

# Create your views here.

def add_author(request):
    return render(request,'add_author.html')