from django.shortcuts import render
from .forms import ExForm
# Create your views here.

def add_post(request):
    form = ExForm()
    return render(request,'post.html',{'form':form})